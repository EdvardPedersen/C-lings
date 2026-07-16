/*
 * Printing every even number between 0 and 15
 */

#include <stdio.h>

int main() {
  int i = 0;
  while (i != 15) {
    printf("i: %d\n", i);
    i += 2;
  }
}
