#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void interrupt(void) {
    char input[256];
    gets(input);
}

void main(void) {
    uint64_t ualloc_size = 0x100000;

    while (1) {
        malloc(ualloc_size);
        interrupt();
    }
}
