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
  tables.c : Tables

  $Log$
******************************************************************************/

#include "typedef.h"

Float	lgclimit[] = {
  0.00000,   0.79102,   0.55664,  14.26563,  14.08398,   0.00000,   0.00000,   0.00000,   0.00000,   0.00000,   0.00000,   0.00000,
  0.00000,  13.85156,   1.73047,  13.76758,  13.92773,   0.00000,   0.00000,   0.00000,   0.00000,   0.00000,   0.00000,   0.00000,
 -1.96094,   8.91211,   7.83594,  14.09961,  13.77930,   0.91016,  -2.41406,   0.00000,   0.00000,   0.00000,   0.00000,   0.00000,
 -1.96094,   8.66992,  13.53125,  14.09570,  13.95117,  12.97461,   2.14648,   0.00000,   0.00000,   0.00000,   0.00000,   0.00000,
 -1.47266,   9.29297,  13.92578,  13.89063,  13.87891,  13.93750,  12.20703,  -4.99023,   0.00000,   0.00000,   0.00000,   0.00000,
  4.60547,  12.33398,  14.09180,  14.14258,  14.16016,  13.48633,  12.39063,   2.01172,   0.00000,   0.00000,   0.00000,   0.00000,
 10.66016,  10.72656,  13.83203,  13.68359,  13.93945,  13.77930,  13.09570,  10.17578,  -0.15430,  -2.92578,   0.00000,   0.00000,
  6.59375,  10.19531,  13.34375,  12.87305,  13.36719,  13.36328,  13.12891,  12.66797,   0.72852,   0.30078,   4.87109,   7.85742,
  2.64063,   9.52539,   9.85547,  10.35938,  10.63086,  12.92383,  12.70508,  12.65234,   8.96680,   1.32422,   4.86719,   7.81445,
  6.24805,   8.26758,   8.78125,   9.08594,   9.03125,  10.34180,  11.21875,  11.07227,   8.32617,   8.41992,   7.70313,   7.86133,
  6.18945,   6.71875,   7.98438,   7.37109,   7.50391,   7.69922,   9.09180,   8.73633,   6.91211,   7.68750,   7.22266,   3.50977,
  4.40430,   5.46484,   6.17773,   6.04492,   6.14063,   6.84766,   5.89063,   5.43750,   4.67188,   5.58008,   7.70898,   7.46094,
  3.39648,   5.41602,   5.40039,   4.77734,   4.59375,   4.63477,   6.43359,   3.54102,   4.37891,   3.70117,   6.64844,   4.74414,
  0.00000,   3.50000,   4.60352,   3.92188,   3.68164,   4.21680,   4.18750,   3.32617,   3.38867,   2.32813,   5.15039,   1.76563,
  0.00000,   1.10156,   3.04492,   3.18945,   2.60156,   2.43164,   2.91016,   1.48438,   0.43555,   0.44336,   1.50391,   1.75391,
  0.00000,  -0.11914,  -1.13672,   1.41602,   1.49609,   0.72852,   0.60352,  -0.35352,  -0.98242,  -1.15039,  -1.99414,   0.00000,
  0.00000,   0.00000,   0.00000,   1.36861,   1.18557,  -0.36990,  -4.01682,  -2.21214,   0.00000,  -1.33077,  -3.04360,   0.00000,
  0.00000,   0.00000,   0.00000,   0.52843,   0.43190,   0.00000,   0.00000,  -2.86324,   0.00000,   0.00000,   0.00000,   0.00000};

Float	lspecb1[] = {
-0.0059814,  -0.0075378,  -0.0113449,  -0.0002670,  -0.0103607,  -0.0055771,   0.0091400,  -0.0032730,
-0.0053177,  -0.0019302,   0.0037079,  -0.0106049,  -0.0021820,  -0.0003815,   0.0100098,   0.0037460,
-0.0009308,  -0.0001831,  -0.0040741,  -0.0110474,  -0.0238800,  -0.0042191,   0.0014114,  -0.0061035,
 0.0031128,   0.0013046,   0.0076218,  -0.0042191,  -0.0073776,  -0.0045013,  -0.0051651,   0.0158539,
-0.0023270,  -0.0014496,  -0.0036392,   0.0071030,   0.0026093,  -0.0172119,  -0.0009613,  -0.0059662,
-0.0081329,  -0.0077362,   0.0091782,   0.0048294,   0.0101395,   0.0007172,   0.0030212,   0.0013885,
 0.0006104,   0.0040817,  -0.0010300,  -0.0081787,  -0.0126343,  -0.0218582,  -0.0007629,  -0.0092163,
 0.0090561,   0.0081329,   0.0096436,   0.0009613,   0.0011063,  -0.0042572,   0.0038910,  -0.0034485,
-0.0044785,  -0.0070572,  -0.0158615,   0.0019913,   0.0087204,   0.0005951,   0.0022583,  -0.0074539,
 0.0042114,   0.0052719,  -0.0061417,   0.0057449,   0.0057068,  -0.0022202,   0.0133896,   0.0077362,
-0.0039902,  -0.0037308,  -0.0103226,  -0.0064774,  -0.0049667,  -0.0043411,  -0.0066986,  -0.0186844,
 0.0035553,   0.0042877,   0.0199356,   0.0078812,   0.0031281,  -0.0082245,  -0.0142746,  -0.0015106,
 0.0032806,   0.0013351,  -0.0004501,   0.0149384,   0.0076141,   0.0033264,  -0.0038376,  -0.0110245,
 0.0010910,   0.0050964,   0.0128632,   0.0091553,   0.0088348,   0.0151443,   0.0096664,   0.0043411,
-0.0047226,  -0.0046234,   0.0096664,   0.0042496,  -0.0064697,  -0.0039902,  -0.0056915,  -0.0162430,
-0.0000229,   0.0000000,   0.0265427,   0.0128021,   0.0049896,   0.0054398,   0.0008698,  -0.0047150,
-0.0074081,  -0.0089569,  -0.0175552,  -0.0174561,  -0.0057831,  -0.0148010,   0.0076141,   0.0079803,
-0.0019760,  -0.0027161,  -0.0077667,  -0.0104675,  -0.0090866,  -0.0027542,   0.0306244,   0.0160751,
-0.0044403,  -0.0059509,  -0.0128784,  -0.0197525,  -0.0304413,  -0.0161133,   0.0037613,   0.0098114,
-0.0001907,   0.0020599,   0.0160294,   0.0045853,  -0.0091476,  -0.0058670,   0.0226593,   0.0125122,
-0.0057526,  -0.0060425,  -0.0029755,  -0.0092010,   0.0054550,  -0.0046692,  -0.0137711,  -0.0035477,
-0.0022125,  -0.0046158,  -0.0083923,   0.0117264,   0.0248260,   0.0126343,   0.0082626,   0.0001907,
-0.0016632,   0.0000076,  -0.0051346,  -0.0084305,  -0.0128784,  -0.0196915,  -0.0223007,  -0.0168076,
 0.0046158,   0.0114517,   0.0148926,   0.0092087,   0.0188599,  -0.0058212,   0.0079727,   0.0046082,
-0.0006714,  -0.0006714,  -0.0119095,  -0.0186539,   0.0112305,  -0.0053024,   0.0070267,  -0.0016022,
 0.0114136,   0.0131760,   0.0045929,  -0.0096207,   0.0138092,   0.0076675,   0.0137863,   0.0142441,
 0.0089951,   0.0114975,  -0.0246811,  -0.0092545,  -0.0067444,  -0.0065155,  -0.0055161,  -0.0072098,
 0.0116730,   0.0303574,   0.0396042,   0.0238495,   0.0113144,   0.0006714,  -0.0080719,   0.0067749,
 0.0061035,   0.0072174,   0.0028000,  -0.0075989,   0.0156174,   0.0043716,  -0.0073624,  -0.0141525,
 0.0069580,   0.0107727,   0.0140839,   0.0036621,   0.0325394,   0.0216980,   0.0056152,   0.0061188,
 0.0065002,   0.0056458,   0.0067139,   0.0007935,   0.0008087,  -0.0099030,  -0.0182724,  -0.0288086,
 0.0147324,   0.0161285,   0.0276260,   0.0238800,   0.0214386,   0.0131302,   0.0047607,  -0.0047836,
-0.0083008,  -0.0135345,  -0.0167313,  -0.0003433,  -0.0090408,  -0.0008469,  -0.0017624,   0.0161667,
-0.0031662,  -0.0056992,  -0.0011444,   0.0063324,  -0.0090790,   0.0121918,   0.0022354,   0.0048523,
-0.0050354,  -0.0077744,  -0.0103531,  -0.0145035,  -0.0191193,  -0.0035934,  -0.0159454,   0.0042343,
 0.0078888,   0.0054169,   0.0038223,  -0.0016632,  -0.0109177,  -0.0039520,  -0.0170212,  -0.0018616,
-0.0038910,  -0.0082321,  -0.0112686,   0.0100861,  -0.0043945,  -0.0049820,  -0.0151062,   0.0018616,
-0.0030060,  -0.0051117,   0.0013962,   0.0250015,  -0.0003738,  -0.0045395,   0.0120697,   0.0071411,
-0.0017471,  -0.0031509,  -0.0094299,  -0.0154495,  -0.0188980,  -0.0264816,  -0.0149384,   0.0071030,
 0.0070190,   0.0111084,   0.0142746,   0.0070648,  -0.0085373,  -0.0219345,   0.0042267,   0.0029221,
-0.0084000,  -0.0120621,  -0.0198364,  -0.0063629,   0.0110550,   0.0045700,   0.0082169,   0.0152664,
-0.0012970,  -0.0023575,   0.0041809,   0.0055084,   0.0066299,   0.0041122,   0.0141602,   0.0310822,
-0.0008011,   0.0027390,  -0.0027847,  -0.0278168,  -0.0051651,  -0.0065536,  -0.0094833,  -0.0070724,
 0.0257950,   0.0224075,   0.0190277,   0.0123291,   0.0018692,  -0.0124512,  -0.0261765,  -0.0093994,
 0.0024414,   0.0011520,  -0.0020218,   0.0018616,   0.0149918,   0.0050735,  -0.0103073,   0.0105972,
 0.0045166,   0.0086136,   0.0284348,   0.0160980,   0.0127563,   0.0124054,   0.0261307,   0.0190277,
-0.0064392,  -0.0072556,   0.0081406,   0.0079956,  -0.0225372,  -0.0159760,  -0.0059891,  -0.0012741,
-0.0008316,   0.0018845,   0.0423431,   0.0217514,   0.0008698,  -0.0041199,   0.0085602,   0.0102158,
-0.0227127,  -0.0309753,  -0.0029831,  -0.0045471,  -0.0044708,  -0.0003662,   0.0006409,   0.0024567,
 0.0003204,  -0.0007782,   0.0007553,  -0.0061646,  -0.0099792,   0.0272598,   0.0179977,   0.0155029,
-0.0022583,  -0.0034180,  -0.0074692,  -0.0160370,  -0.0401917,  -0.0083847,  -0.0189896,  -0.0101929,
 0.0022202,   0.0045013,   0.0243607,   0.0083466,  -0.0246048,   0.0046997,  -0.0021439,   0.0023041,
-0.0029678,  -0.0052338,   0.0025406,   0.0110321,   0.0029221,  -0.0056763,  -0.0311356,  -0.0081024,
 0.0019226,   0.0010529,   0.0046844,   0.0322113,   0.0202255,   0.0150070,   0.0069733,   0.0021973,
 0.0002441,   0.0029984,   0.0021286,   0.0054932,  -0.0150223,  -0.0383453,  -0.0137787,  -0.0153046,
 0.0024185,   0.0418625,   0.0316925,   0.0256805,   0.0141296,   0.0077591,   0.0154495,   0.0091095,
-0.0076904,  -0.0126266,  -0.0251846,  -0.0261307,   0.0040588,   0.0132675,   0.0196609,   0.0226059,
 0.0066910,   0.0088730,   0.0157623,   0.0102997,   0.0193558,   0.0230255,   0.0201874,   0.0446930,
-0.0050049,  -0.0121231,  -0.0460205,  -0.0182266,  -0.0260468,  -0.0259018,  -0.0209122,  -0.0175323,
 0.0057602,   0.0139847,   0.0579147,   0.0351944,  -0.0040665,  -0.0186386,  -0.0284729,  -0.0171432,
 0.0025711,   0.0053101,   0.0119553,   0.0070419,   0.0170135,   0.0213165,  -0.0242462,  -0.0078735,
 0.0176849,   0.0341110,   0.0360947,   0.0325394,   0.0362167,   0.0317612,   0.0233765,   0.0178757,
 0.0018082,   0.0054245,   0.0223770,   0.0096283,  -0.0214233,  -0.0161209,  -0.0263824,  -0.0237961,
 0.0040436,   0.0186539,   0.0682678,   0.0692520,   0.0290146,   0.0145493,   0.0086975,   0.0001144,
-0.0073166,  -0.0097580,  -0.0165558,  -0.0164719,  -0.0054932,   0.0104904,   0.0003052,  -0.0026093,
 0.0012283,   0.0010452,  -0.0012741,  -0.0147095,   0.0082169,   0.0179520,   0.0043182,   0.0050583,
-0.0025101,  -0.0054626,  -0.0107498,  -0.0207672,  -0.0277328,   0.0124207,   0.0075836,   0.0025177,
 0.0082932,   0.0077057,   0.0032272,  -0.0084229,  -0.0114975,   0.0151215,   0.0005341,  -0.0019226,
-0.0067825,  -0.0089111,  -0.0184479,   0.0017242,  -0.0064545,  -0.0217209,  -0.0024490,  -0.0019455,
-0.0006104,  -0.0049820,   0.0121994,   0.0176392,   0.0069962,   0.0066605,  -0.0074310,   0.0169830,
-0.0000534,   0.0012283,  -0.0020981,  -0.0062180,  -0.0171661,  -0.0240707,   0.0151367,   0.0081100,
 0.0176697,   0.0149918,   0.0140686,   0.0097809,   0.0034790,   0.0105209,   0.0014572,   0.0027390,
-0.0064240,  -0.0083618,  -0.0160828,  -0.0105820,   0.0212021,   0.0123367,  -0.0018921,  -0.0081329,
-0.0053406,  -0.0044250,  -0.0000076,   0.0004807,   0.0158310,   0.0097198,   0.0251846,   0.0064545,
-0.0037766,  -0.0038528,  -0.0154724,  -0.0229874,   0.0008011,   0.0042114,  -0.0171432,  -0.0225220,
 0.0014191,   0.0062637,   0.0232925,   0.0124817,   0.0117035,   0.0014648,  -0.0106812,  -0.0250015,
-0.0061264,  -0.0116348,  -0.0150681,   0.0248032,   0.0146561,   0.0051270,  -0.0047836,  -0.0073013,
-0.0086670,  -0.0107346,   0.0193634,   0.0210648,   0.0206528,   0.0170822,   0.0147781,   0.0120239,
-0.0034256,  -0.0035858,  -0.0015869,  -0.0019073,  -0.0142975,   0.0131302,  -0.0151138,  -0.0197067,
-0.0020447,   0.0006714,   0.0414658,   0.0249710,   0.0197296,   0.0175705,  -0.0016098,   0.0003967,
-0.0080795,  -0.0119095,  -0.0216980,  -0.0280533,  -0.0105896,  -0.0002365,  -0.0009079,   0.0161667,
 0.0123291,   0.0056229,  -0.0075455,  -0.0211258,  -0.0128326,   0.0001068,   0.0061417,   0.0149689,
-0.0029373,  -0.0080795,  -0.0181351,  -0.0304947,  -0.0477219,   0.0010223,   0.0070724,   0.0156937,
 0.0141983,   0.0176315,   0.0056763,  -0.0044098,  -0.0164795,   0.0085678,   0.0159912,   0.0168228,
-0.0061722,  -0.0097046,  -0.0205307,  -0.0133286,   0.0058441,  -0.0068512,  -0.0228195,   0.0043335,
-0.0051880,  -0.0111084,  -0.0178680,   0.0235138,   0.0195084,   0.0178680,   0.0160370,   0.0151443,
 0.0019531,  -0.0010757,  -0.0006256,  -0.0082626,  -0.0146942,  -0.0227509,  -0.0364304,   0.0097427,
 0.0283661,   0.0346222,   0.0130768,   0.0101700,   0.0174866,   0.0197144,   0.0173874,   0.0145874,
-0.0066528,  -0.0088272,  -0.0246811,  -0.0331345,   0.0143738,   0.0057602,  -0.0002747,  -0.0007629,
 0.0018539,   0.0035934,  -0.0006332,  -0.0124893,   0.0327225,   0.0176163,   0.0233994,   0.0193710,
-0.0135727,  -0.0340042,  -0.0894012,  -0.0189590,  -0.0093231,  -0.0084381,  -0.0090332,  -0.0088577,
 0.0099640,   0.0462646,   0.0453796,   0.0276489,   0.0160370,   0.0025406,  -0.0106049,  -0.0192184,
-0.0034714,  -0.0054245,  -0.0114441,   0.0039444,   0.0178375,   0.0054550,  -0.0171051,  -0.0267639,
-0.0011978,   0.0003204,   0.0082169,   0.0209274,   0.0536499,   0.0358963,   0.0197830,   0.0092850,
 0.0023346,   0.0034943,  -0.0014572,   0.0014343,  -0.0054932,  -0.0127716,  -0.0328522,  -0.0487366,
 0.0088501,   0.0262756,   0.0493164,   0.0377655,   0.0499496,   0.0279236,  -0.0018158,  -0.0138168,
-0.0091782,  -0.0182266,  -0.0430679,   0.0019302,   0.0016556,   0.0016785,  -0.0005188,  -0.0010605,
-0.0042267,  -0.0044327,  -0.0011826,   0.0068283,   0.0034714,   0.0279465,   0.0020370,  -0.0107651,
-0.0088577,  -0.0077744,  -0.0206451,  -0.0217667,  -0.0166931,  -0.0166321,  -0.0041122,  -0.0111160,
 0.0114822,   0.0137863,   0.0051422,   0.0017090,  -0.0126801,  -0.0010223,  -0.0035172,  -0.0167770,
-0.0047989,  -0.0082703,  -0.0190659,   0.0137558,  -0.0056305,  -0.0116806,  -0.0150452,  -0.0211258,
-0.0013351,  -0.0021439,   0.0114136,   0.0434952,   0.0037308,  -0.0042496,  -0.0063400,  -0.0076370,
-0.0027390,  -0.0010986,  -0.0103989,  -0.0135803,  -0.0289612,  -0.0440826,   0.0028915,   0.0004730,
 0.0343170,   0.0352859,   0.0218124,   0.0093842,  -0.0054703,  -0.0086594,   0.0062637,   0.0050507,
-0.0057678,  -0.0092545,  -0.0224991,  -0.0150681,   0.0306778,   0.0213089,   0.0150299,   0.0065155,
-0.0029221,  -0.0022583,   0.0017624,   0.0089951,   0.0164185,   0.0172653,   0.0484390,   0.0271988,
-0.0026627,   0.0002594,  -0.0224304,  -0.0537415,  -0.0119095,  -0.0128479,  -0.0069809,  -0.0067749,
 0.0076294,   0.0422287,   0.0109787,   0.0002823,   0.0060196,   0.0020523,  -0.0027847,  -0.0075226,
-0.0038986,  -0.0030670,   0.0042572,   0.0127869,   0.0384750,   0.0027542,  -0.0117798,  -0.0054169,
-0.0036087,   0.0035782,   0.0424576,   0.0331345,   0.0332794,   0.0281830,   0.0280609,   0.0207291,
 0.0046082,   0.0080490,   0.0111084,  -0.0065918,  -0.0519485,  -0.0157547,  -0.0019455,  -0.0029144,
 0.0034485,   0.0175858,   0.0821762,   0.0272980,   0.0156860,   0.0159531,   0.0184174,   0.0143356,
-0.0314102,  -0.0573120,  -0.0361557,  -0.0185471,  -0.0215912,  -0.0093765,  -0.0097656,  -0.0018997,
 0.0007401,   0.0014343,   0.0100021,   0.0084229,   0.0087585,   0.0477676,   0.0178299,   0.0107193,
-0.0015106,  -0.0081024,  -0.0302200,  -0.0461807,  -0.0730972,  -0.0303497,  -0.0201721,  -0.0060349,
 0.0099411,   0.0259781,   0.0389252,  -0.0061798,  -0.0111618,   0.0061264,   0.0084991,  -0.0016098,
-0.0020447,  -0.0056534,  -0.0065460,  -0.0004425,  -0.0104218,  -0.0178070,  -0.0585556,  -0.0127106,
-0.0028152,  -0.0029221,   0.0108337,   0.0616455,   0.0292282,   0.0216827,   0.0112686,   0.0042725,
 0.0102158,   0.0152206,  -0.0010757,  -0.0186920,  -0.0433731,  -0.0584030,  -0.0330887,  -0.0182495,
 0.0341263,   0.0759430,   0.0464096,   0.0330963,   0.0261612,   0.0209045,   0.0158920,   0.0113602,
-0.0082016,  -0.0157471,  -0.0547714,  -0.0575638,   0.0062866,   0.0029297,   0.0097733,   0.0060959,
 0.0022659,   0.0080261,   0.0222321,   0.0229797,   0.0417252,   0.0456924,   0.0649796,   0.0428009,
-0.0109406,  -0.0265427,  -0.0845337,  -0.0739746,  -0.0471725,  -0.0384445,  -0.0217361,  -0.0125504,
 0.0284500,   0.0826721,   0.1126251,   0.0532761,   0.0114975,  -0.0184174,  -0.0278168,  -0.0385132,
-0.0009766,  -0.0013504,   0.0082321,   0.0411072,   0.0223083,   0.0020828,  -0.0291138,  -0.0363312,
 0.0068207,   0.0242920,   0.0580826,   0.0683975,   0.0789490,   0.0621414,   0.0445786,   0.0190887,
 0.0293198,   0.0630722,   0.0497131,  -0.0120468,  -0.0440521,  -0.0440979,  -0.0299225,  -0.0291214,
 0.0271988,   0.0838776,   0.1353760,   0.1022873,   0.0741501,   0.0458984,   0.0275192,  -0.0002823
};

Float   lspecb2[] = {
-0.00045776,   0.00002289,   0.00099182,   0.00270081,   0.00746155,   0.00529480,  -0.00106049,  -0.00178528,
-0.00029755,  -0.00101471,  -0.00086212,   0.00087738,  -0.00106049,   0.00087738,  -0.01163483,   0.00027466,
-0.00118256,  -0.00199127,  -0.00380707,  -0.00403595,  -0.00030518,   0.00240326,   0.00474548,   0.00889587,
-0.00337219,  -0.00188446,   0.00494385,  -0.00525665,   0.00161743,  -0.00501251,   0.00176239,   0.00527191,
 0.00021362,   0.00082397,  -0.00271606,  -0.00733185,   0.00150299,   0.00543213,   0.00144958,  -0.00333405,
-0.00189972,  -0.00291443,  -0.00379944,  -0.00436401,  -0.00100708,  -0.00173187,  -0.00433350,  -0.00628662,
-0.00256348,  -0.00302124,  -0.00202942,   0.00238037,  -0.00732422,   0.00712585,   0.00381470,   0.00191498,
-0.00487518,  -0.00572205,   0.00082397,   0.00188446,  -0.00714111,  -0.00489044,  -0.00206757,  -0.00262451,
-0.00010681,  -0.00145721,  -0.00476074,   0.00331116,   0.01039886,  -0.00167847,   0.00269318,   0.00548553,
-0.00064850,  -0.00139618,  -0.00781250,  -0.00374603,   0.00415039,  -0.00397491,  -0.00685883,   0.00500488,
-0.00432587,  -0.00485229,  -0.00765228,   0.00385284,   0.00276184,  -0.00205231,   0.00595856,  -0.00077057,
-0.01011658,   0.00389099,  -0.00176239,   0.00331116,   0.00072479,  -0.00367737,  -0.00161743,  -0.00171661,
-0.00463867,  -0.00547791,  -0.00512695,  -0.00231171,   0.00556183,   0.00563049,  -0.00107574,   0.00090027,
-0.00424957,  -0.00586700,  -0.00111389,   0.00374603,   0.00692749,  -0.00564575,  -0.00616455,  -0.00193024,
-0.00263214,  -0.00723267,  -0.00938416,   0.00535583,  -0.00386810,   0.00198364,  -0.00283813,   0.00453949,
 0.00451660,  -0.01326752,  -0.00163269,  -0.00040436,   0.00058746,  -0.00355530,  -0.00116730,  -0.00093842,
 0.00000763,   0.00039673,   0.00560760,  -0.00251770,   0.00186157,   0.01089478,  -0.00137329,   0.00457001,
-0.00207520,  -0.00434113,   0.00380707,   0.00775909,  -0.00274658,   0.00917053,  -0.00515747,  -0.00215149,
-0.00079346,  -0.00209808,   0.00601196,  -0.00038147,  -0.00785828,   0.00248718,  -0.00209808,   0.01184082,
-0.00298309,  -0.00412750,   0.01414490,   0.00212097,  -0.00019073,  -0.00061798,  -0.00274658,   0.00065613,
 0.00035858,   0.00170898,   0.00259399,  -0.01609802,  -0.00000763,   0.00162506,  -0.00133514,   0.00100708,
-0.00503540,  -0.00462341,   0.00434875,  -0.00257874,   0.00315094,   0.00467682,   0.00090790,  -0.01029968,
-0.00057220,  -0.00221252,  -0.00485992,  -0.00782013,  -0.00888824,   0.00464630,  -0.00598145,   0.00544739,
-0.00719452,  -0.01031494,   0.00247192,  -0.00617218,  -0.00236511,   0.00193024,  -0.00309753,   0.00254059,
-0.00290680,  -0.00582886,   0.00511169,   0.00539398,   0.00604248,   0.00421143,   0.00669861,   0.00392151,
-0.00224304,  -0.00450134,   0.00026703,   0.00598907,   0.00528717,   0.00506592,  -0.00660706,   0.01150513,
-0.00428772,  -0.00616455,   0.00080872,   0.00531769,  -0.00407410,  -0.00506592,   0.00903320,   0.00828552,
-0.01528931,  -0.00518799,   0.00449371,   0.00463104,   0.00074005,   0.00062561,   0.00030518,   0.00215912,
-0.00177765,  -0.00195313,  -0.00070953,  -0.01091003,   0.01485443,   0.00244141,   0.00580597,  -0.00041199,
-0.00414276,  -0.00515747,  -0.00126648,   0.00601959,   0.01933289,   0.00696564,  -0.00712585,  -0.00523376,
-0.00677490,  -0.01074219,  -0.01129150,  -0.00234985,  -0.00765991,  -0.00885773,   0.00039673,   0.00651550,
-0.00891113,  -0.01766968,   0.00561523,   0.00578308,   0.00490570,   0.00194550,  -0.00356293,  -0.00082397,
-0.00096130,  -0.00098419,  -0.00413513,   0.00173950,   0.00495911,   0.01183319,   0.00845337,  -0.00122833,
-0.00326538,  -0.00333405,   0.00357056,  -0.00922394,   0.00468445,   0.00469971,  -0.01351166,  -0.00124359,
-0.00380707,  -0.00453949,  -0.00596619,  -0.00867462,  -0.00395966,  -0.00065613,   0.00699615,  -0.00128174,
-0.00752258,  -0.00469208,   0.00773621,  -0.00899506,   0.00354004,  -0.01000214,   0.00416565,  -0.00489044,
 0.00000763,  -0.00075531,  -0.00958252,  -0.00546265,  -0.00563049,   0.01355743,   0.00136566,  -0.01033783,
-0.00630951,  -0.00655365,  -0.00659943,   0.00173950,  -0.00452423,   0.00329590,  -0.00886536,  -0.01154327,
-0.00095367,  -0.00313568,  -0.00857544,   0.00354767,  -0.01430511,   0.00208282,   0.00795746,  -0.00600433,
-0.00719452,  -0.01290894,   0.00675201,   0.00386047,  -0.01235962,  -0.00559235,   0.00556183,  -0.00572968,
-0.00801086,  -0.00989532,  -0.00411224,  -0.00192261,   0.01290894,  -0.00526428,   0.00534058,   0.01023865,
-0.00186920,  -0.00344086,  -0.00266266,  -0.01030731,   0.00197601,  -0.00857544,  -0.01191711,   0.01605988,
-0.00836945,  -0.00853729,  -0.00543976,   0.00074005,   0.00202942,  -0.00057983,   0.01557922,  -0.00852203,
-0.01739502,   0.00542450,  -0.00310516,  -0.00865936,  -0.00068665,   0.00004578,   0.00126648,   0.00104523,
-0.00631714,  -0.01346588,  -0.01500702,  -0.00602722,   0.00646210,   0.01339722,  -0.00647736,  -0.00049591,
-0.00720215,  -0.01295471,  -0.00642395,  -0.00480652,   0.01066589,  -0.01364136,  -0.01339722,  -0.00752258,
-0.00552368,  -0.01621246,  -0.01331329,   0.01739502,  -0.00738525,   0.00836182,   0.00555420,   0.00202942,
 0.00701904,  -0.02751923,   0.00681305,   0.00177765,  -0.00151062,  -0.00057220,   0.00139618,   0.00026703,
 0.00125885,   0.00099945,   0.00302887,  -0.00566864,  -0.00022125,   0.02838135,  -0.00177765,   0.00128937,
-0.00152588,  -0.00276184,   0.01119232,   0.00526428,  -0.00367737,   0.01557159,  -0.01921844,  -0.00600433,
-0.00518036,  -0.00488281,   0.00891876,  -0.00863647,  -0.00762939,   0.00898743,   0.00974274,   0.00371552,
-0.00656891,  -0.00149536,   0.02567291,  -0.01044464,  -0.00462341,  -0.00055695,  -0.00331879,  -0.00172424,
 0.00264740,   0.00337219,  -0.00964355,  -0.03454590,   0.00086975,   0.01454163,   0.00080109,   0.00027466,
-0.00373077,  -0.00283813,   0.00484467,  -0.00320435,   0.00572968,   0.00675201,  -0.00530243,  -0.03117371,
-0.00197601,  -0.01000214,  -0.00423431,  -0.00650787,  -0.02683258,   0.01259613,  -0.00359344,   0.00352478,
-0.01738739,  -0.02180481,   0.00868988,  -0.01496887,  -0.00506592,  -0.00038147,  -0.00035858,   0.00020599,
-0.00734711,  -0.00748444,   0.01610565,   0.00942993,   0.01790619,   0.01776123,   0.01367950,   0.01322937,
-0.00354767,  -0.00787354,  -0.00128937,   0.00877380,  -0.00132751,   0.00061798,  -0.02446747,   0.01464081,
-0.00668335,  -0.00952911,   0.00102997,   0.00148010,  -0.00872040,   0.00305176,   0.03495026,   0.01872253,
-0.03459930,   0.00503540,   0.00631714,   0.00146484,   0.00110626,  -0.00109100,  -0.00064850,   0.00020599,
-0.00075531,  -0.00411224,  -0.02098846,  -0.01145172,   0.03794098,   0.02877808,   0.01161194,   0.00054932,
-0.00887299,  -0.02392578,  -0.01149750,   0.03517151,   0.02966309,   0.00566864,  -0.02129364,  -0.02059937,
-0.01180267,  -0.03713226,  -0.03850555,  -0.00773621,  -0.01717377,  -0.01065826,  -0.00489044,  -0.00129700,
-0.02636719,  -0.04943848,   0.01272583,   0.01393127,   0.00457001,   0.00045776,   0.00072479,   0.00040436
};

Float   lspmean[] = {   /* mean value of LSP components */
 0.0950317, 0.1489563, 0.2513123, 0.3629456, 0.4780884, 0.5877075, 0.7058105, 0.8007202};

Float   lspp[] = {  /* LSP Predictor Coefficients */
 1.040710, 0.844971, 0.682922, 0.575989, 0.464600, 0.346008, 0.226074, 0.103577,
 1.034851, 0.884094, 0.723816, 0.609863, 0.489563, 0.366516, 0.240234, 0.109253,
 1.055237, 0.922180, 0.762695, 0.644531, 0.512695, 0.373474, 0.238037, 0.108337,
 1.076843, 0.935608, 0.790771, 0.673523, 0.540588, 0.399841, 0.264221, 0.118774,
 1.065552, 0.901978, 0.746155, 0.636047, 0.514282, 0.386169, 0.256165, 0.117493,
 1.037476, 0.848816, 0.684326, 0.577393, 0.463684, 0.347717, 0.232666, 0.107239,
 1.022278, 0.809021, 0.645081, 0.535767, 0.430481, 0.325562, 0.219055, 0.099304,
 0.964844, 0.743469, 0.578125, 0.484375, 0.393250, 0.297913, 0.201416, 0.091736};

Float	lgpecb[] = {	/* Log-Gain Prediction Error CodeBook */
-5.38477, -3.68066, -2.76855, -2.09717, -1.47217, -0.33984,  0.67285,  1.82031,
-0.88525,  0.16748,  1.20313,  2.62549,  3.80518,  5.64551,  8.70605, 11.85156};

Float lgp[]={
 0.7801514, 0.7377625, 0.6150818, 0.5926208, 0.4674072, 0.3635864, 0.2378540, 0.1286926};

Float	lgmean = 11.45752;

Float	cccb[] = {
-0.514526,  0.847412,  0.166748,  0.120605,
 0.389648,  1.125000, -1.070557,  0.048584,
-0.263916, -0.053101,  0.189209,  0.177734,
 2.927368, -0.262695, -0.092896,  0.274292,
-0.348755, -0.356812, -0.765747, -0.639038,
 1.912231,  0.890869, -2.045654, -0.802124,
-0.180298, -1.221802, -1.728760, -0.965210,
 1.743286, -1.338379,  0.184204, -0.281128,
-1.407593,  1.109497,  1.724487, -0.347900,
 2.324219,  1.637939,  0.742188,  0.526001,
-0.330933, -0.405396,  0.890747,  1.477661,
 1.545532, -0.195068,  0.148560,  0.073486,
-0.583740,  0.456055,  0.253296, -1.269043,
 0.587769, -0.129028,  0.616699, -0.256714,
-1.211426, -0.743896, -0.608887, -0.219360,
 0.196289, -1.870728, -0.309326,  1.111694};

Float pp9cb[] = {
-0.022522, -0.353455,  0.002197, -0.003967,  0.000366,  0.000000, -0.000122, -0.031250,  0.000000,
-0.426147,  0.989624,  0.063049,  0.210876, -0.031189,  0.013428, -0.045410, -0.244812, -0.000977,
 0.337036, -1.186096,  0.409424,  0.199890,  0.242798, -0.068970, -0.028381, -0.351685, -0.041931,
 0.262207,  0.473328,  0.251770, -0.062073, -0.059570, -0.033020, -0.017212, -0.056030, -0.015869,
 0.534241,  0.753235,  0.150085, -0.201172, -0.056519, -0.040100, -0.071350, -0.141846, -0.005615,
 0.545532,  1.699646, -0.329407, -0.463623,  0.279907,  0.089844, -0.074402, -0.722168, -0.027100,
 0.283752,  0.565430, -0.156372, -0.080200,  0.044189,  0.022217, -0.020142, -0.079956, -0.006104,
 0.838562,  1.034973,  0.089111, -0.433960, -0.046143, -0.037354, -0.175781, -0.267761, -0.002014,
-0.158081,  0.575684, -0.197205,  0.045471,  0.056763, -0.015564, -0.006226, -0.082825, -0.009705,
 0.020447,  1.079346, -0.422424, -0.011047,  0.227966,  0.004333, -0.000122, -0.291260, -0.044617,
 0.236511, -0.646912, -0.251587,  0.076538, -0.081360,  0.029785, -0.013977, -0.104614, -0.015808,
 0.116882,  0.874512,  0.108887, -0.051086, -0.047607, -0.006348, -0.003418, -0.191162, -0.002991,
 0.535400,  1.342102, -0.004028, -0.359253,  0.002686,  0.001099, -0.071655, -0.450317,  0.000000,
 0.102112,  1.911194, -0.150574, -0.097534,  0.143860,  0.007690, -0.002625, -0.913147, -0.005676,
 0.576660,  0.916931, -0.272522, -0.264404,  0.124939,  0.078552, -0.083130, -0.210205, -0.018555,
 0.921509,  1.341675, -0.355408, -0.618164,  0.238403,  0.163757, -0.212280, -0.450012, -0.031555,
 0.053589,  0.331238,  0.060120, -0.008850, -0.009949, -0.001587, -0.000732, -0.027405, -0.000916,
-0.334106,  1.298950,  0.939758,  0.216980, -0.610352,  0.156982, -0.027893, -0.421814, -0.220764,
 0.198242, -0.586304,  0.324402,  0.058105,  0.095093, -0.032166, -0.009827, -0.085938, -0.026306,
 0.101135,  0.724731,  0.504761, -0.036621, -0.182922, -0.025513, -0.002563, -0.131287, -0.063721,
 0.157104,  0.999268,  0.802124, -0.078491, -0.400757, -0.062988, -0.006165, -0.249634, -0.160828,
-0.035217,  1.416809,  0.517395,  0.024963, -0.366516,  0.009094, -0.000305, -0.501831, -0.066895,
 0.446411,  0.646851,  0.513916, -0.144409, -0.166199, -0.114685, -0.049805, -0.104614, -0.066040,
 0.547058,  0.942505,  0.471069, -0.257813, -0.221985, -0.128845, -0.074829, -0.222107, -0.055481,
-0.173523,  0.558838,  0.263611,  0.048462, -0.073669,  0.022888, -0.007507, -0.078064, -0.017395,
-0.424072,  1.610962,  0.640259,  0.341553, -0.515747,  0.135742, -0.044983, -0.648804, -0.102478,
-0.355591, -0.702820,  0.022034, -0.124939,  0.007751,  0.003906, -0.031616, -0.123474, -0.000122,
-0.244446,  0.940491,  0.598267,  0.114929, -0.281311,  0.073120, -0.014954, -0.221130, -0.089478,
 0.347046,  1.152039,  0.385620, -0.199890, -0.222168, -0.066895, -0.030090, -0.331787, -0.037170,
-0.189636,  1.869568,  0.246582,  0.177246, -0.230469,  0.023376, -0.008972, -0.873840, -0.015198,
 0.635010,  0.814880,  0.510864, -0.258728, -0.208130, -0.162231, -0.100830, -0.166016, -0.065247,
 0.191528,  1.579285,  0.121948, -0.151245, -0.096313, -0.011658, -0.009155, -0.623535, -0.003723
};

/* front-end highpass filter */
Float	hpfa[] = {1.000000, -1.899109, 0.905396};
Float	hpfb[] = {0.924133, -1.848267, 0.924133};

/* coarse pitch search */
Float adf[] = {1.00000000000000, -2.95802363194525,  3.63373126275837, -2.12495286948979, 0.50039692036808};
Float bdf[] = {0.04330826, -0.06871796, 0.09910965, -0.06871796, 0.04330826};
Float   x[] = {0.25, 0.5};
Float  x2[] = {0.0625, 0.25}; /* square of x[] */
Float MPTH[]= {0.6300049, 0.4800110, 0.4200134, 0.3599854};

Float	winl[] = {
  0.0001221, 0.0004883, 0.0011292, 0.0019836, 0.0031128, 0.0044556, 0.0060730, 0.0079346,
  0.0100098, 0.0123596, 0.0149536, 0.0177612, 0.0208130, 0.0241394, 0.0276794, 0.0314331,
  0.0354309, 0.0396729, 0.0441284, 0.0488281, 0.0537415, 0.0588684, 0.0642395, 0.0697937,
  0.0755920, 0.0815735, 0.0877686, 0.0941772, 0.1007996, 0.1076050, 0.1145935, 0.1217957,
  0.1291809, 0.1367493, 0.1444702, 0.1524048, 0.1604919, 0.1687622, 0.1771851, 0.1857605,
  0.1945190, 0.2033997, 0.2124634, 0.2216492, 0.2309570, 0.2404175, 0.2500000, 0.2597046,
  0.2695313, 0.2794800, 0.2895203, 0.2996826, 0.3099365, 0.3202820, 0.3307495, 0.3412476,
  0.3518677, 0.3625488, 0.3732910, 0.3840942, 0.3949585, 0.4058838, 0.4168396, 0.4278259,
  0.4388733, 0.4499512, 0.4610596, 0.4721680, 0.4833069, 0.4944153, 0.5055847, 0.5166931,
  0.5278320, 0.5389404, 0.5500488, 0.5611267, 0.5721741, 0.5831604, 0.5941162, 0.6050415,
  0.6159058, 0.6267090, 0.6374512, 0.6481323, 0.6587524, 0.6692505, 0.6797180, 0.6900635,
  0.7003174, 0.7104797, 0.7205200, 0.7304688, 0.7402954, 0.7500000, 0.7595825, 0.7690430,
  0.7783508, 0.7875366, 0.7966003, 0.8054810, 0.8142395, 0.8228149, 0.8312378, 0.8395081,
  0.8475952, 0.8555298, 0.8632507, 0.8708191, 0.8782043, 0.8854065, 0.8923950, 0.8992004,
  0.9058228, 0.9122314, 0.9184265, 0.9244080, 0.9302063, 0.9357605, 0.9411316, 0.9462585,
  0.9511719, 0.9558716, 0.9603271, 0.9645691, 0.9685669, 0.9723206, 0.9758606, 0.9791870,
  0.9822388, 0.9850464, 0.9876404, 0.9899902, 0.9920654, 0.9939270, 0.9955444, 0.9968872,
  0.9980164, 0.9988708, 0.9995117, 0.9998779, 1.0000000, 0.9969177, 0.9877014, 0.9723816,
  0.9510498, 0.9238892, 0.8910217, 0.8526306, 0.8090210, 0.7604065, 0.7070923, 0.6494446,
  0.5877991, 0.5224915, 0.4539795, 0.3826904, 0.3090210, 0.2334595, 0.1564331, 0.0784607};

Float	sstwin[] = {
 1.00009999953429, 0.99950664069252, 0.99802802477777, 0.99556852473654, 0.99213540467992,
 0.98773878257675, 0.98239158368278, 0.97610947534163, 0.96891079060864};

/* pole-zero noise feedback filter */
Float gfsz[] = {
  0.00000000000000, -0.40000000000000, -0.54000000000000, -0.56275000000000,
 -0.53527500000000, -0.48872828125000, -0.43730950781250, -0.38724014365234, 
 -0.34101742974609
};

Float gfsp[] = {
  1.00000000000000, 0.87500000000000, 0.76562500000000, 0.66992187500000,
  0.58618164062500, 0.51290893554688, 0.44879531860352, 0.39269590377808, 
  0.34360891580582
};

int idxord[] = { 0, 1, 2, 3, 4, 8, 5, 9, 6, 10, 7, 11, 12, 13, 14, 15 };

Float	lgpecb_nh[] = {	/* Log-Gain Prediction Error Next-Higher CodeBook */
 -3.68066, -2.76855, -2.09717, -1.47217, -0.88525,  0.16748,  1.20313,  2.62549,
 -0.33984,  0.67285,  1.82031,  3.80518,  5.64551,  8.70605, 11.85156};

