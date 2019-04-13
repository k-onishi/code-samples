void main(void)
{
    volatile int a;
    int b;

    a = 1;
    b = 2;
    a = 3;
    a = 3;
    a = 1;
    return;
}
