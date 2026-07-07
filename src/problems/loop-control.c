/*
 * To control a loop we can use: 'break' and 'continue' statements. 'break' will
 * stop a loop, and 'continue' will skip to the next iteration.
 *
 * This program tries print every odd number between 0 and 10.
 */

#include <stdio.h>

int main() {
  for (int i = 0; i <= 10; i++) {
    if (i % 2 == 0) {
      break;
    }
    printf("%d\n", i);
  }
}
