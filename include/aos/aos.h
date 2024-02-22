/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#ifndef AOS_AOS_H
#define AOS_AOS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "types.h"
#include "cli.h"
#include "cloud.h"
#include "debug.h"
#include "kernel.h"
#include "kv.h"
#include "list.h"
#include "log.h"
#include "vfs.h"
#include "version.h"
#include "yloop.h"
#include "errno.h"
#include "init.h"

/*
#include <aos/alink.h>
#include "network.h"
*/

/**
 * Transmit data on a UART interface
 *
 * @param  data     pointer to the start of data
 * @param  size     number of bytes to transmit
 * @param  timeout  time to wait
 *
 * @return  0 success, EIO if an error occurred with any step
 */
int32_t aos_uart_send(void *data, uint32_t size, uint32_t timeout);


#ifdef __cplusplus
}
#endif

#endif /* AOS_AOS_H */

