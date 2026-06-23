/* If you want to match a number to alot of different cases you can use a switch
 * statement. A switch statemen will goto the case that matches the variable you
 * are switching on. However, it acts just as a goto, so you have to tell it
 * when a case stops using `break;`.
 */
#include <stdio.h>

int main() {
  int i = 5;

  switch (i) {
  case 1:
    printf("I is 1\n");
  case 2:
    printf("I is 2\n");
  case 3:
    printf("I is 3\n");
  case 4:
    printf("I is 4\n");
  case 5:
    printf("I is 5\n");
  case 6:
    printf("I is 6\n");
  case 7:
    printf("I is 7\n");
  case 8:
    printf("I is 8\n");
  case 9:
    printf("I is 9\n");
  case 10:
    printf("I is 10\n");
  default:
    printf("I is bigger than 10\n");
  }
}
