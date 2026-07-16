/*
 * You can place ++/-- on either side of a variable to increment it by one.
 * Depending on the side it will either return the old or new value.
 *
 * We want to count to 25 including 0.
 */
#include <stdio.h>

int main() {
  int i = 0;
  while (i < 25) {
    printf("%d\n", ++i);
  }
}
