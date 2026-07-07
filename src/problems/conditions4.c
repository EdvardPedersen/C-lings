/* The C standard says that a comparison wil return 1 or 0, the if statement
 * only checks if what is inside the parentheses are 1 or 0.
 */

#include <stdio.h>

int main() {
  int number1 = 10;
  int number2 = 10;
  int cmp = number1 < number2;
  if (cmp) {
    printf("Number1 is smaller or equal number2\n");
  } else {
    printf("Number1 is not smaller or not equal number2\n");
  }
}
