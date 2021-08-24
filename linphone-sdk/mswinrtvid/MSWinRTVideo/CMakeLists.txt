############################################################################
# GenerateSDK.cmake
# Copyright (C) 2010-2020 Belledonne Communications, Grenoble France
#
############################################################################
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
#
############################################################################

cmake_minimum_required(VERSION 3.2)

project(mswinrtvideo-wrapper)
set(MSWINRTVIDEO_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
#file(COPY ${CMAKE_INSTALL_PREFIX}/share/linphonecs/LinphoneWrapper.cs DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
#file(COPY ${LINPHONESDK_DIR}/cmake/Windows/wrapper/CsUwpWrapper.csproj DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
#file(COPY ${LINPHONESDK_DIR}/cmake/Windows/wrapper/Properties DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
#file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/MSWinRTVideo.vcxproj DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/MSWinRTVideo.vcxproj.in ${CMAKE_CURRENT_BINARY_DIR}/MSWinRTVideo.vcxproj @ONLY)

message("INSTALLATION mswinrtvideo: ${CMAKE_INSTALL_PREFIX}")
message("LINPHONE_PLATFORM mswinrtvideo: ${LINPHONE_PLATFORM}")
message("CMAKE_CURRENT_BINARY_DIR mswinrtvideo: ${CMAKE_CURRENT_BINARY_DIR}")

execute_process(
	COMMAND "msbuild" "-t:restore" "MSWinRTVideo.vcxproj"
	COMMAND "msbuild" "MSWinRTVideo.vcxproj" "/p:BaseOutputPath=${CMAKE_INSTALL_PREFIX}" "/p:MDILCompile=true" "/t:build" "/p:Configuration=Release" "/p:Platform=${LINPHONE_PLATFORM}"
)
