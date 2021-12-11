/*
 * This file is part of hello-ta
 *
 * Copyright (c) 2021 Eric Le Bihan <eric.le.bihan.dev@free.fr>
 *
 * SPDX-License-Identifier: ISC
 */

#ifndef USER_TA_HEADER_DEFINES_H
#define USER_TA_HEADER_DEFINES_H

#include <hello_ta.h>

#define TA_UUID TA_HELLO_TA_UUID

#define TA_FLAGS                                                               \
	(TA_FLAG_EXEC_DDR | TA_FLAG_MULTI_SESSION | TA_FLAG_DEVICE_ENUM_SUPP)
#define TA_STACK_SIZE (2 * 1024)
#define TA_DATA_SIZE (32 * 1024)

#define TA_CURRENT_TA_EXT_PROPERTIES                                           \
	{"gp.ta.description", USER_TA_PROP_TYPE_STRING, "Hello TA"},           \
	{                                                                      \
		"gp.ta.version", USER_TA_PROP_TYPE_U32, &(const uint32_t)      \
		{                                                              \
			0x0100                                                 \
		}                                                              \
	}

#endif /* USER_TA_HEADER_DEFINES_H */
