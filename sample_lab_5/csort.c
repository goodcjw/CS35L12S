#include <stdlib.h>
#include <stdio.h>

/**
 * void qsort ( void * base, size_t num, size_t size, 
 *              int ( * comparator ) ( const void *, const void * ) );
 *   -- Function pointer
 *      int ( * comparator ) ( const void *, const void * )
 *   int compare (const void *a, const void *b)
 */

int int_compare(const void *a, const void *b) {
  int* ia = (int*) a;
  int* ib = (int*) b;
  if (*ia == *ib)
    return 0;
  else if (*ia > *ib)
    return 1;
  else
    return -1;
}

int main() {
  int iarray[5] = {5, 3, 1, 2, 4};
  int i;
  for (i = 0; i < 5; i++) {
    printf("%d ", iarray[i]);
  }
  printf("\n");

  qsort(iarray, 5, sizeof(int), int_compare);
  for (i = 0; i < 5; i++) {
    printf("%d ", iarray[i]);
  }
  printf("\n");
  return 0;
}
