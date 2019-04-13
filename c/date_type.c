#include <stdio.h>

struct desc_struct {
    unsigned long a,b;
};

void main(void)
{
    printf("size of int is %zu\n", sizeof(unsigned int));
    printf("size of desc_struct is %zu\n", sizeof(struct desc_struct));
    return;
}
