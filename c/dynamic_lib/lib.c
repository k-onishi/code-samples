#include <stdio.h>

extern int global;

void libfunc(int value)
{
    printf("value: %d\n", value);
    printf("global: %d\n", global);
    return;
}
