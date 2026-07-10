/*
 * You can also have macros that takes in arguments. But one has to be very
 * carefull, since macros are just a direct find and replace.
 *
 * Tips: You can use 'gcc -E' to only run the preprocessor of the compiler. Here
 * you will see that the contents of stdio.h has been placed at the top of the
 * file, and that the macro have been copied into the places where we have used
 * it. This code sould be at the bottom of the preprocessed file.
 */
#include <stdio.h>

#define SQUARE(x) (x * x)

int main() {
  printf("(2+5) squared is: %d\n", SQUARE(2 + 5));
  return 0;
}
