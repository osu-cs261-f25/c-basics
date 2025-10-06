#include <stdio.h>

struct student {
  char* name;
  int id;
  float gpa;
};

int main() {
  int n = 20;
  int* n_ptr = &n;

  printf("== n: %d\n", n);
  printf("== n_ptr: %p\n", n_ptr);
  printf("== &n: %p\n", &n);
  printf("== *n_ptr: %d\n", *n_ptr);

  *n_ptr = 16;

  printf("\n== n: %d\n", n);
  printf("== n_ptr: %p\n", n_ptr);
  printf("== &n: %p\n", &n);
  printf("== *n_ptr: %d\n", *n_ptr);

  struct student s;
  s.name = "Luke Skywalker";
  s.id = 933111111;
  s.gpa = 3.75;
  printf("== %s (%d): %f\n", s.name, s.id, s.gpa);

  struct student* s_ptr = &s;
  // (*s_ptr).gpa = 3.8;
  s_ptr->gpa = 3.8;
  printf("\n== %s (%d): %f\n", s.name, s.id, s.gpa);
}
