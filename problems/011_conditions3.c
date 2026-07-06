/* In C a comparison be made using ==, !=, <, >, <=,
 * and >=. Respectively means: equal, not equal, less than, biger than, less or
 * equal, and bigger and equal.
 *
 * A single '=', will just assign a variable in C.
 */
#include <stdio.h>

int main() {
  int number = 10;
  if (number = 11) {
    printf("The number is 11\n");
  } else {
    printf("The number is not 11\n");
  }
  return 0;
}
