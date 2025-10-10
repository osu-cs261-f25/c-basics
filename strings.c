#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char* name = "Leia Organa";
  printf("== name[0]: %c\n", name[0]);
  // name[0] = 'W';

  char* copy = malloc((strlen(name) + 1) * sizeof(char));
  strncpy(copy, name, strlen(name));
  copy[0] = 'W';
  printf("== copy: %s\n", copy);

  free(copy);
}
