#include <stdint.h>
#include <stdio.h>

struct alignment1 {
    uint8_t a;
    uint16_t b;
};

#pragma pack(push, 1)
struct alignment2 {
    uint8_t a;
    uint16_t b;
};
#pragma pack(pop)

void main(void)
{
    struct alignment1 x;
    alignas(1) struct alignment1 y;
    printf("alignment1 size is %zu\n", sizeof(struct alignment1));
    printf("alignment2 size is %zu\n", sizeof(struct alignment2));
    printf("x size is %zu\n", sizeof(x));
    printf("y size is %zu\n", sizeof(y));
    return;
}
