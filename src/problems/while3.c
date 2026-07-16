/*
 * It is also posible to escape a loop by using the keyword 'break'
 *
 * We expect this code to only print 5 once.
 */
#include <stdio.h>

int main() {
  int i = 5;
  while (1) {
    printf("%d\n", i);
    if (i < 5) {
      i++;
    } else {
    }
  }
}
