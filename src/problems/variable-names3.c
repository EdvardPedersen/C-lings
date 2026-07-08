/*
 * One needs to careful not to give a variable the same name as a function.
 */

#include <stdio.h>

void cool_name() {
  printf("Cool function\n");
  return;
}

int main() {
  int cool_name = 1;
  printf("%d\n", cool_name);
  cool_name();
}
