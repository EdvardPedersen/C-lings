/* There are 3 logical operators in C: '&&', '||', '!'. '&&' is the logical
 * 'and' operator, it returns 0 if either of the inputs are 0 and 1 otherwise
 * (checks if both inputs are 1). '||' is the logical 'or' operator, it returns
 * 0 if both inputs are 0, and otherwise (checks if either inputs are 1). '!' is
 * the logical 'not' operator, it returns 1 if its input is 0 and 1 otherwise
 * (it just flips the input).
 *
 */
#include <stdio.h>

int main() {
  int number1 = 10;
  int number2 = 5;
  int number3 = 1;

  if (number2 > number1 || number2 > number3) {
    printf("Number 2 is biggest\n");
  } else if (number1 > number2 && number1 > number3) {
    printf("Number1 is biggest\n");
  } else if (number3 > number1 && number3 > number1) {
    printf("Number3 is biggest\n");
  } else {
    printf("No one is biggest\n");
  }
}
