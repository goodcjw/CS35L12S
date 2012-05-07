#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/syscall.h>

int main(void) {
  long ID1, ID2;

  /* direct system call */
  ID1 = syscall(SYS_getpid);
  printf ("syscall(SYS_getpid) = %ld\n", ID1);

  /* wrappered system call */
  ID2 = getpid();
  printf ("getpid() = %ld\n", ID2);

  return 0;
}
