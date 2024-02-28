#include "sort.h"
#include <stdio.h>

int main() {
  int a[] = {10, 6, 9, 2, 1, 8, 7};
  quickSort(a, 0, 6);
  for (int i = 0; i < 7; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
