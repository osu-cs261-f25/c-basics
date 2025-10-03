#include <stdio.h>

struct student {
  char* name;
  int id;
  float gpa;
};

int add_3_ints(int a, int b, int c);

void hello() {
  printf("Hello, world!\n");
}

int main(int argc, char** argv) {
  int n = 16;
  double pi = 3.1415;
  float f = 4.5;
  char c = 'a';

  // n = 4.75;

  hello();
  hello();

  printf("== n: %d f: %.4lf\n", n, pi);

  if (n > 10) {

  } else if (n > 5) {

  } else if (n > 2) {

  } else {

  }

  /*
    for i in range (0, n):
  */
  // int i;
  for (int i = 0; i < n; i++) {

  }

  int sum = add_3_ints(n, 2, 3);
  printf("== sum: %d\n", sum);
  printf("== n: %d\n", n);

  struct student s;
  s.name = "Luke Skywalker";
  s.id = 933111111;
  s.gpa = 3.75;
  printf("== %s (%d): %f\n", s.name, s.id, s.gpa);

  struct student s2;
  s.name = "Leia Organa";
  s.id = 933000000;
  s.gpa = 4.0;
  printf("== %s (%d): %f\n", s.name, s.id, s.gpa);
}

int add_3_ints(int a, int b, int c) {
  int sum = a + b + c;
  a = a * 100;
  return sum;
}
