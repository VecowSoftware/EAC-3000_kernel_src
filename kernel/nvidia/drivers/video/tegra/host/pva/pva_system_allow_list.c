/*
 * Copyright (c) 2022, NVIDIA CORPORATION & AFFILIATES.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

unsigned char pva_auth_allow_list_sys[] = {
	0x08, 0x00, 0x00, 0x00, 0xfc, 0xdf, 0x1c, 0x71,
	0xb4, 0x5b, 0x65, 0xa8, 0x59, 0xb0, 0x43, 0xfb,
	0x96, 0x30, 0xdc, 0x03, 0xc0, 0x38, 0xe2, 0xfa,
	0x1c, 0x63, 0xe6, 0xc7, 0x72, 0xf5, 0xd0, 0x9b,
	0x6a, 0x3c, 0x4a, 0x90, 0x7a, 0x9b, 0x5e, 0x39,
	0x18, 0x63, 0x0c, 0x3d, 0x33, 0x6d, 0x64, 0xd0,
	0x7d, 0x5f, 0xfd, 0x01, 0xfd, 0x4a, 0x3a, 0xe9,
	0x94, 0xf2, 0x88, 0x0b, 0x23, 0x1a, 0x91, 0x1c,
	0x0b, 0xdb, 0x56, 0xde, 0x50, 0xa7, 0xc1, 0x5e,
	0xf4, 0x88, 0xb0, 0x99, 0xc0, 0x8d, 0x78, 0x8b,
	0x66, 0x6f, 0x99, 0x8c, 0x85, 0x74, 0x22, 0x69,
	0x1b, 0x79, 0xf4, 0x90, 0x8d, 0xc0, 0x1a, 0x22,
	0x35, 0x65, 0xff, 0xce, 0xe4, 0x0b, 0x10, 0xd0,
	0x18, 0xb8, 0x56, 0x4f, 0x30, 0x1b, 0x22, 0x43,
	0xdc, 0x77, 0xff, 0xfb, 0xdd, 0x93, 0x3e, 0x83,
	0xf3, 0x23, 0x07, 0x45, 0x6a, 0x20, 0xf2, 0xba,
	0x39, 0xa9, 0xff, 0xc6, 0x4d, 0x75, 0xe6, 0x33,
	0xa4, 0xf7, 0x61, 0xd4, 0x67, 0x2b, 0xad, 0x32,
	0xf1, 0x68, 0xb6, 0x03, 0xf5, 0x9d, 0x22, 0xd9,
	0xd8, 0xb4, 0xc6, 0xae, 0x81, 0x5d, 0xbd, 0x46,
	0x6e, 0xc7, 0x1f, 0xea, 0x25, 0x24, 0xc9, 0xbd,
	0xa6, 0x2a, 0xf7, 0x7e, 0x44, 0x95, 0x78, 0x3a,
	0x05, 0x08, 0x0b, 0xda, 0xb3, 0x6d, 0x30, 0x2f,
	0xbe, 0xc5, 0x81, 0x38, 0x52, 0x16, 0x5b, 0xa2,
	0xaf, 0x63, 0x9a, 0x66, 0xac, 0x96, 0xb6, 0xb6,
	0x8e, 0x39, 0xd4, 0x86, 0xf6, 0x5f, 0xfa, 0x15,
	0x16, 0x90, 0x45, 0x5f, 0xfd, 0x2d, 0x70, 0xf5,
	0x5a, 0xa7, 0xe9, 0x10, 0x85, 0x10, 0x6a, 0xa1,
	0x3f, 0x3f, 0x0e, 0x85, 0x7b, 0x15, 0x7b, 0x39,
	0x3d, 0xe3, 0x90, 0x08, 0xf8, 0x4a, 0x04, 0x75,
	0x37, 0x67, 0x55, 0xec, 0x0a, 0x51, 0xf4, 0x3e,
	0x2e, 0xfd, 0x69, 0x8d, 0x42, 0xab, 0xd5, 0x1b,
	0x65, 0xa4, 0xab, 0xb1, 0x08, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xab, 0xd2, 0x29, 0x0a, 0x01, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x5c, 0x1f, 0x76, 0x43,
	0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
	0x1c, 0x5a, 0xc3, 0x81, 0x01, 0x00, 0x00, 0x00,
	0x03, 0x00, 0x00, 0x00, 0xb9, 0x17, 0x31, 0x87,
	0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
	0x36, 0x02, 0xcc, 0x9b, 0x01, 0x00, 0x00, 0x00,
	0x05, 0x00, 0x00, 0x00, 0x5b, 0x76, 0xdd, 0x9e,
	0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
	0xde, 0xdb, 0xd2, 0xc1, 0x01, 0x00, 0x00, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x63, 0xc9, 0x58, 0xd5
};

unsigned int pva_auth_allow_list_sys_len = 360;