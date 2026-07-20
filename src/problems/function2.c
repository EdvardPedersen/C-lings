/*
 * The return type of a function needs to match the returned type of the
 * function.
 *
 * Void means nothing, i.e. a return type of void means it returns nothing
 */

#include <stdio.h>

void sum(int a, int b) {
  return a + b;
}

int main() {
  int s = sum(7, 2);

  printf("7 + 8 = %d\n", s);
}
