#ifndef _MOTION_H_
#define _MOTION_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#define DEV_PATH "/sys/class/gpio/"

void GPIO_Configure(char num);
void Turnoff_Motion(char num);
void Turnon_Motion(char num);
void GPIO_close(char num);

#ifdef __cplusplus
}
#endif

#endif
