/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#ifndef AOS_TYPES_H
#define AOS_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

#if defined(WITH_LWIP) || defined(CONFIG_NO_TCPIP) || defined(WITH_SAL)
#define POLLIN  0x1
#define POLLOUT 0x2
#define POLLERR 0x4
struct pollfd {
    int fd;
    short events;
    short revents;
};
#else
#include <poll.h>
#include "types.h"
#include "stat.h"
#include <fcntl.h>
#endif

#ifndef AOS_EXPORTX
/**
 * define the AOS_EXPORT macro*
 */

#define AOS_EXPORT(ret, fun, argstype...)
#endif

#ifndef AOS_COMPONENT_INIT
/**
 * define the AOS_COMPONENT_INIT macro
 */
#define AOS_COMPONENT_INIT(fun, args...)
#endif

#ifndef AOS_TESTCASE
/**
 * define the AOS_TESTCASE macro
 */
#define AOS_TESTCASE(fun, args...)
#endif

typedef uint32_t    clockid_t;
typedef uint32_t    key_t;         /* Used for interprocess communication. */
typedef uint32_t    pid_t;         /* Used for process IDs and process group IDs. */
typedef signed long ssize_t;       /* Used for a count of bytes or an error indication. */
typedef long long   off_t; 
typedef long suseconds_t;

#ifndef PATH_MAX
#define PATH_MAX    1024
#endif

#if __BSD_VISIBLE
#include <sys/select.h>
#endif

#endif /* AOS_TYPES_H */

