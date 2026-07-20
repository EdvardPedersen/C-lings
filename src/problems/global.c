/*
 * Sometimes it can be benficial to have a variable that can be accseesd by all
 * function, and that persists.
 *
 * To do this just place the variable decleration above the function definitions
 *
 * This exercise should be done without modifying the 'inc' and 'print_i'
 * functions
 */
#include <stdio.h>

void inc() {
  i++;
}

void print_i() {
  printf("i = %d\n", i);
}

int main() {
  int i = 0;
  inc();
  inc();
  print_i();
  inc();
  print_i();
}
