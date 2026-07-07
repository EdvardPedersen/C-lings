/* FizzBuzz is a classic programing challange, where the goal is to print every
 * number between 1 and some given end goal, but when ever you encounter a
 * number divisible by 3 you print Fizz, whenever you encounter a number thats
 * divisible by 5 you print Buzz, and if it is divisible by both you print
 * FizzBuzz.
 *
 * The is '%' operator is called the modolus operator. 'a % b', will give you
 * the reminder after you do 'a/b' as an integer division. If 'b' divides 'a'
 * then 'a % b' is equal to zero.
 *
 * This is a simple implementation of FizzBuzz, but something is wrong.
 */
#include <stdio.h>

int main() {
  for (int i = 1; i < 15; i++) {
    if (i % 3 == 0) {
      printf("Fizz");
    }
    if (i % 5) {
      printf("Buzz");
    }
    if (i % 3 == 0 || i % 5 == 0) {
      printf("\n");
    } else {
      printf("%d\n", i);
    }
  }
}
