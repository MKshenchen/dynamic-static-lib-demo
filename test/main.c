#include "sort.h"
#include <stdio.h>

int main() {
  int a[] = {9, 6, 1, 8, 4, 0, 2};
  printf("ori's arr: ");
  for (int i = 0; i < 7; printf("%d ", a[i++]));
  printf("\n");
  quickSort(a, 0, 6);
  printf("after sort: ");
  for (int i = 0; i < 7; printf("%d ", a[i++]));
  printf("\n");
  return 0;
}
