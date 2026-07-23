/*
 * The compiler can concatenate strings if you have two string literals right
 * after each other, even on different lines.
 */
#include <stdio.h>

int main() {
  char *test = "Hello, ";
               "Wold!";

  printf("%s\n", test);
}
