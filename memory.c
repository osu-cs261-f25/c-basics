#include <stdio.h>
#include <stdlib.h>

struct student {
  char* name;
  int id;
  float gpa;
};

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

  struct student* s = malloc(sizeof(struct student));
  s->name = "Luke Skywalker";
  s->id = 933111111;
  s->gpa = 3.75;
  printf("\n== %s (%d): %f\n", s->name, s->id, s->gpa);

  free(n);
  free(array);
  free(s);
}
