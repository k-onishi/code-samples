#include <stdio.h>

void main(void)
{
    int array[10];

    printf("array is 0x%x\n", (unsigned int)array);
    printf("&array[0] is 0x%x\n", (unsigned int)&array[0]);

    return;
}
