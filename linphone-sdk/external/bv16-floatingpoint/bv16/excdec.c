/*****************************************************************************/
/* BroadVoice(R)16 (BV16) Floating-Point ANSI-C Source Code                  */
/* Revision Date: October 5, 2012                                            */
/* Version 1.2                                                               */
/*****************************************************************************/

/*****************************************************************************/
/* Copyright 2000-2012 Broadcom Corporation                                  */
/*                                                                           */
/* This software is provided under the GNU Lesser General Public License,    */
/* version 2.1, as published by the Free Software Foundation ("LGPL").       */
/* This program is distributed in the hope that it will be useful, but       */
/* WITHOUT ANY SUPPORT OR WARRANTY; without even the implied warranty of     */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the LGPL for     */
/* more details.  A copy of the LGPL is available at                         */
/* http://www.broadcom.com/licenses/LGPLv2.1.php,                            */
/* or by writing to the Free Software Foundation, Inc.,                      */
/* 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.                 */
/*****************************************************************************/


/*****************************************************************************
  excdec.c :excitation signal decoding including long-term synthesis.

  $Log$
******************************************************************************/

#include "typedef.h"
#include "bv16cnst.h"

void excdec_w_LT_synth(
                       Float   *ltsym, /* long-term synthesis filter memory at decoder*/
                       short   *idx,   /* excitation codebook index array for current subframe */
                       Float   gainq,  /* quantized linear gains for sub-subframes */
                       Float   *b,     /* coefficient of 3-tap pitch predictor */
                       short   pp,     /* pitch period */
                       Float   *cb,    /* scalar quantizer codebook */
                       Float   *EE)
{
   Float a0, *fp1, *fp2, *fp3, gain;
   int m, n, id;
   short	*ip;
   Float E, t;
   
   ip=idx;
   fp1=&ltsym[LTMOFF]; /* fp1 points to 1st sample of current subframe */
   fp2=&ltsym[LTMOFF-pp+1];
   E=0.0;
   for (m = 0; m < FRSZ; m+=VDIM) { /* loop thru vectors in sub-subframe */
      id=*ip++;   /* get codebook index of current vector */
      if (id < CBSZ) gain=gainq;
      else {
         gain=-gainq;
         id -= CBSZ;
      }
      fp3=&cb[id*VDIM];
      for (n = 0; n < VDIM; n++) {
         a0  = b[0] * *fp2--;
         a0 += b[1] * *fp2--;
         a0 += b[2] * *fp2;/* a0=pitch predicted value of LT syn filt */
         t = *fp3++ * gain;
         E += t*t;
         *fp1++ = a0 + t; /* add scale codevector to a0 */
         fp2 = &fp2[3];    /* prepare fp2 for filtering next sample */
      }         
   }
   *EE = E;
}
