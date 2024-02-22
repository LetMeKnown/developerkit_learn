/*
* Copyright (C) 2015-2017 Alibaba Group Holding Limited
*
*
* uData api for external part
*/

#include "aos.h"
#include <stdio.h> 
#include <stdbool.h>
#include <fcntl.h>
#include "yloop.h"
#include "uData_com_desc.h"

int uData_report_publish(void *pdata)
{
    if(pdata == NULL){
        return -1;
    }
    uData_get_report_pkg(pdata);
    return 0;
}
AOS_EXPORT(int, uData_report_publish, void *);

int uData_dev_ioctl(udata_t* pkg, uint8_t cmd, void* parm)
{
    /* set the udata_type and related info here */
    //will be supported later
}

int uData_subscribe(udata_type_e type)
{
    int ret = 0;
    ret = uData_service_subscribe(type);
    if(unlikely(ret)){
        return -1;
    }
    
    LOG("%s %s successfully\n", uDATA_STR, __func__);
    return 0;
}
AOS_EXPORT(int, uData_subscribe, udata_type_e);

int uData_unsubscribe(udata_type_e type)
{
    int ret = 0;
    ret = uData_service_unsubscribe(type);
    if(unlikely(ret)){
        return -1;
    }
    
    LOG("%s %s successfully\n", uDATA_STR, __func__);
    return 0;
}

