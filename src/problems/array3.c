/*
 * C can auto detect how big an array is if initialize at the same time you
 * declare it. It will be set to the number of elemements you initialize.
 */
#include <stdio.h>

int fibonacci(int number) {
  int a = 0;
  int b = 1;
  if (number < 1)
    return 0;
  for (int i = 2; i <= number; i++) {
    int c = a + b;
    a = b;
    b = c;
  }
  return b;
}

int main() {
  int numbers[] = {0, 1, 1, 2, 3, 5, 8, 13, 21};

  numbers[9] = fibonacci(9);

  printf("The 11th number in the fibonacci sequence is: %d\n",
         numbers[8] + numbers[9]);
}
