#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  printf("Hello world from printf().\n");
  
  if (fork() == -1) {
    exit(EXIT_FAILURE);
  }
  
  exit(EXIT_SUCCESS);
}

/*
$ gcc line_and_block_buffer.c -o main.exe
$ ./main.exe
Hello world from printf().
$ ./main.exe > sample.txt
$ cat sample.txt
Hello world from printf().
Hello world from printf().
*/
