/*
 * Some variable names are not allowed in C, for example you can't start a
 * variable name with numbers. You can however have numbers in the middle of
 * variable nasme.
 */
#include <stdio.h>

int main() {
  int 2ints [2] = {1, 2};
  printf("first int: %d, second int: %d\n", 2ints [0], 2ints [1]);
}
