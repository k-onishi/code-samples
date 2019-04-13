#include <stdio.h>
#include <unistd.h>

void main(void)
{
    pid_t pid;
    pid = fork();

    if (pid == 0)
        puts("I'm a child.");
    else
        puts("I'm a parent.");
}
