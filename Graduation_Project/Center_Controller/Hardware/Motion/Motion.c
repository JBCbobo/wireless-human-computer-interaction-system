#include "Motion.h"

void GPIO_Configure(char num)
{
    char tmp[60];
    sprintf(tmp,"echo %d >"DEV_PATH"export",num);
    system(tmp);
    sprintf(tmp,"echo out >"DEV_PATH"gpio%d/direction",num);
    system(tmp);
}

void Turnoff_Motion(char num)
{
    char tmp[60];
    sprintf(tmp,"echo 0 >"DEV_PATH"gpio%d/value",num);
    system(tmp);

}

void Turnon_Motion(char num)
{
    char tmp[60];
    sprintf(tmp,"echo 1 >"DEV_PATH"gpio%d/value",num);
    system(tmp);
}
void GPIO_close(char num)
{
    char tmp[60];
    sprintf(tmp,"echo %d >"DEV_PATH"unexport",num);
    system(tmp);
}
