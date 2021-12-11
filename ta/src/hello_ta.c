/*
 * This file is part of hello-ta
 *
 * Copyright (c) 2021 Eric Le Bihan <eric.le.bihan.dev@free.fr>
 *
 * SPDX-License-Identifier: ISC
 */

#include <inttypes.h>
#include <pta_system.h>
#include <stdint.h>
#include <tee_internal_api.h>
#include <tee_internal_api_extensions.h>

#include <hello_ta.h>

TEE_Result TA_CreateEntryPoint(void) { return TEE_SUCCESS; }

void TA_DestroyEntryPoint(void) {}

TEE_Result TA_OpenSessionEntryPoint(uint32_t ptype,
				    TEE_Param param[4],
				    void **session_id_ptr)
{
	DMSG("Opening");

	return TEE_SUCCESS;
}

void TA_CloseSessionEntryPoint(void *sess_ptr)
{
	DMSG("Closing");
}

TEE_Result TA_InvokeCommandEntryPoint(void *session_id,
				      uint32_t command_id,
				      uint32_t parameters_type,
				      TEE_Param params[4])
{
	return TEE_SUCCESS;
}
