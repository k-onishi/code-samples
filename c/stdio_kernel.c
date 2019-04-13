#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
  char *msg = "Hello world from write() system call\n";
  
  printf("Hello world from printf().\n");
  write(STDOUT_FILENO, msg, strlen(msg));
  
  exit(EXIT_SUCCESS);
}

/*
$ gcc stdio_kernel.c -o main.exe
$ ./main.exe
Hello world from printf().
Hello world from write() system call
$ ./main.exe > sample.txt
$ cat sample.txt
Hello world from write() system call
Hello world from printf().
*/
