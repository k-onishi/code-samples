#include <stdio.h>

int plus(int a, int b) { return a + b; }

int minus(int a, int b) { return a - b; }

//int apply(int(func)(int, int), int x, int y) {
//    return func(x, y);
//}

int apply(void* func, int x, int y) {
    //int (*function)(int, int) = (int (*)(int, int))func;
    //return function(x, y);
    return ((int (*)(int, int))func)(x, y);
}

int main(void)
{
    int a = 10;
    int b = 5;
    printf("plus() -> %d\n", apply(plus, a, b));
    //printf("minus() -> %d\n", apply(minus, a, b));
    return 0;
}
