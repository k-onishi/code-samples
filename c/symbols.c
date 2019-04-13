#include <stdio.h>

#define msg_1 "hello "
#define msg_2 "world."

#define con(num) msg_##num

void main(void)
{
    puts(con(1) con(2));
    return;
}
