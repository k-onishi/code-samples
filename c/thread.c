#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* my_thread(void* p)
{
    puts("this is my thread.");
}

void main(void)
{
    pthread_t pthread;
    pthread_create(&pthread, NULL, &my_thread, NULL);
    sleep(1);
}
