#include <stdio.h>
#include <stdlib.h>

int main() {
  int* n = malloc(sizeof(int));
  *n = 16;
  printf("== *n: %d\n", *n);

  int* array = malloc(1000 * sizeof(int));
  array[0] = 0;
  array[1] = 1;
  for (int i = 0; i < 1000; i++) {
    array[i] = i;
  }

  free(n);
  free(array);
}
