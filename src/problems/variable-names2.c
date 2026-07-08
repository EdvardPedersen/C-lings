/*
 * You can't call a variable a type name.
 */
#include <stdio.h>

int main() {
  int char = 65;

  // Fun fact if you print an int with the char format specifier it will print
  // the ascii character that coresponds to that number
  printf("65 = %c\n", char);
}
