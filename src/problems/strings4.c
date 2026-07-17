/*
 * To concatenate strings you can use the 'strcat' function from the 'string.h'
 * header. This function takes two arguments, two strings. It will concatenate
 * the second one onto the first one. The result will be in the first argument.
 * One needs to make sure that the first argument has enough space to hold both
 * strings.
 */
#include <stdio.h>
#include <string.h>

int main() {
  char string1[14] = "Hello, ";
  char string2[7] = "World!";

  // Trying to concatenate the strings.
  string1 = string1 + string2;

  printf("%s\n", string1);
}
