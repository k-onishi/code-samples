#include <sys/mman.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main(void)
{
    char* msg = "hello world";
    char* new_msg = NULL;
    int page_size = 0;

    unsigned long sbrk1 = (unsigned long)sbrk(0);
    printf("sbrk1 = 0x%lx\n", sbrk1);

    page_size = getpagesize();
    //new_msg = (char*)mmap(NULL, page_size*2, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    new_msg = (char*)malloc(page_size);
    new_msg = (char*)malloc(page_size * 30);
    printf("mmap = %p\n", new_msg);

    unsigned long sbrk2 = (unsigned long)sbrk(0);
    printf("sbrk2 = 0x%lx\n", sbrk2);

    printf("sbrk2 - sbrk1 = 0x%lx\n", sbrk2 - sbrk1);
}
    
