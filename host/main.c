/*
 * This file is part of hello-ta
 *
 * Copyright (c) 2021 Eric Le Bihan <eric.le.bihan.dev@free.fr>
 *
 * SPDX-License-Identifier: ISC
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <tee_client_api.h>

#include <hello_ta.h>

int main(int argc, char *arg[])
{
	TEEC_Result res;
	TEEC_Context ctx;
	TEEC_Session sess;
	TEEC_Operation op;
	TEEC_UUID uuid = TA_HELLO_TA_UUID;
	uint32_t err_origin;

	res = TEEC_InitializeContext(NULL, &ctx);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "Failed to init context (0x%x)\n", res);
		return 1;
	}

	res = TEEC_OpenSession(&ctx, &sess, &uuid, TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
	if (res != TEEC_SUCCESS) {
		fprintf(stderr, "Failed to open session (0x%x, 0x%x)\n", res, err_origin);
		return 2;
	}

	memset(&op, 0, sizeof(op));

	TEEC_CloseSession(&sess);
	TEEC_FinalizeContext(&ctx);

	return 0;
}
