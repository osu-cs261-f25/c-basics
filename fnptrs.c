#include <stdio.h>
#include <stdlib.h>

struct student {
  char* name;
  int id;
  float gpa;
};

int* create_rand_int_array(int n);
struct student* create_rand_student_array(int n);
void free_rand_student_array(struct student* students, int n);

int compare_ints(const void* a, const void* b) {
  const int* a_int = a;
  const int* b_int = b;
  if (*a_int < *b_int) {
    return -1;
  } else if (*a_int > *b_int) {
    return 1;
  } else {
    return 0;
  }
}

int compare_students(const void* a, const void* b) {
  const struct student* a_stu = a;
  const struct student* b_stu = b;
  if (a_stu->gpa < b_stu->gpa) {
    return 1;
  } else if (a_stu->gpa > b_stu->gpa) {
    return -1;
  } else {
    return 0;
  }
}

int main() {
  int n = 10;
  int* array = create_rand_int_array(n);

  printf("== Int array before sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("  %d", array[i]);
  }
  printf("\n");

  qsort(array, n, sizeof(int), compare_ints);
  printf("\n== Int array after sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("  %d", array[i]);
  }
  printf("\n");

  free(array);

  struct student* students = create_rand_student_array(n);
  printf("\n== Student array before sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("  -- %s (%d): %f\n", students[i].name, students[i].id, students[i].gpa);
  }

  qsort(students, n, sizeof(struct student), compare_students);
  printf("\n== Student array after sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("  -- %s (%d): %f\n", students[i].name, students[i].id, students[i].gpa);
  }

  free_rand_student_array(students, n);
}

/*
 * Make an array of length `n` containing random ints between 1 and 32.
 */
int* create_rand_int_array(int n) {
  int* array = malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    array[i] = rand() % 32 + 1;
  }
  return array;
}

/*
 * Make an array of length `n` containing students with random GPAs between
 * 0 and 4.0;
 */
struct student* create_rand_student_array(int n) {
  struct student* students = malloc(n * sizeof(struct student));
  for (int i = 0; i < n; i++) {
    students[i].name = malloc(32 * sizeof(char*));
    snprintf(students[i].name, 32, "Student %d", i);
    students[i].id = 933000000 + i;
    students[i].gpa = (rand() % 17) / 4.0;
  }
  return students;
}

/*
 * Frees memory allocated by create_rand_student_array().
 */
void free_rand_student_array(struct student* students, int n) {
  for (int i = 0; i < n; i++) {
    free(students[i].name);
  }
  free(students);
}
