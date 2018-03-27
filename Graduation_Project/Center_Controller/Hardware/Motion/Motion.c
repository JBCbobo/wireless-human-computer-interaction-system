#include "Motion.h"

void GPIO_Configure(char* num,char* dir)
{
    char tmp[60];
    int fd;
    fd = open(SYSFS_GPIO_EXPORT, O_WRONLY);
    write(fd, num ,sizeof(num));
    close(fd);

    sprintf(tmp,SYSFS_GPIO_BASE"gpip%s/direction",num);
    fd = open(tmp, O_WRONLY);
    write(fd, dir , sizeof(dir));
    close(fd);

}

void Motion_gpio(char* num,char value)
{
    char tmp[60];
    int fd;
    printf(tmp,SYSFS_GPIO_BASE"gpip%s/value",num);
    fd = open(tmp, O_RDWR);
    write(fd, value , sizeof(value));
    close(fd);
}
