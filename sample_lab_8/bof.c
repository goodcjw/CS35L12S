#include <stdio.h>

void evil() {
  char buffer1[5];
  char buffer2[3];
  int* ret;

  ret = (int*) (buffer1 + 13);
  (*ret) += 8;
}

void main() {
  int x;

  x = 0;
  evil();
  x = 1;
  printf("%d\n", x);
}
