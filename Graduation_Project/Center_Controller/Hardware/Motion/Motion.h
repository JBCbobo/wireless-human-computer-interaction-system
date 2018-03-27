#ifndef _MOTION_H_
#define _MOTION_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define SYSFS_GPIO_BASE "/sys/class/gpio/"
#define SYSFS_GPIO_EXPORT "/sys/class/gpio/export"

void GPIO_Configure(char* num,char* dir);
void Motion_gpio(char* num,char* value);

#ifdef __cplusplus
}
#endif

#endif
