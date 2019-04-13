#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/resource.h>

#define FAILURE -1
#define SUCESS 0

#define ROOT_DIR "/"

#define is_parent(n) n != 0 ? 1 : 0
#define is_child(n) n == 0 ? 1 : 0

int main (void)
{
  pid_t pid;

  /**
   * it forks to detach from the parent, now "init" process is a new parent of the child.
   */
  if ((pid = fork()) == FAILURE) return EXIT_FAILURE;
  if (is_parent(pid))
    _exit(EXIT_SUCCESS); // _exit() doesn't call any functions which are registered by atexit() or on_exit() but exit() does.

  /**
   * the process is now a new session and group leader and has no tty.
   */
  setsid();

  /**
   * it ignores SIGHUP signal from the parent.
   */
  signal(SIGHUP, SIG_IGN);

  /**
   * it detaches from the parent so that doesn't have a parent anymore and not session leader anymore.
   */
  if ((pid = fork()) == FAILURE) return EXIT_FAILURE;
  if (is_parent(pid))
    _exit(EXIT_SUCCESS);

  /**
   * it changes the current working directory
   */
  chdir(ROOT_DIR);

  /**
   * it closes all the file descriptors which might be opened.
   */
  struct rlimit* limit;
  limit = (struct rlimit*)malloc(sizeof(struct rlimit));
  getrlimit(RLIMIT_NOFILE, limit); // get soft and hard limit of max number of file descriptor.
  unsigned int fd_max = (unsigned int)limit->rlim_cur;
  for (int i = 0; i < fd_max; i++) { // close all the descriptors
    close(i);
  }

  /**
   * direct stdin, stdout and stderr to /dev/null
   */
  int fd;
  if ((fd = open("/dev/null", O_RDWR, 0)) != FAILURE) {
    dup2(fd, 0);
    dup2(fd, 1);
    dup2(fd, 2);
    close(fd);
  }

  sleep(60); // Let's see with ps command !!

  return EXIT_SUCCESS;
}
