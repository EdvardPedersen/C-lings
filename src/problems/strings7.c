/*
 * You can't use '==' to compare strings, since the string is just a pointer to
 * the first character, using '==' will compare the pointers which may differ
 * even if the strings say the same.
 *
 * To compare strings you can us the strcmp function from the 'string.h' header
 * file. It take in two strings as argument, and returns an int that says
 * something about how different the strings are. The closer to zero the number
 * is the closer the strings are. So if 'strcmp' returns 0, the strings are
 * equal.
 */
#include <stdio.h>
#include <string.h>

int main() {
  char string1[] = "Hello, world!";
  char string2[] = "Hello, world!";

  if (string1 == string2) {
    printf("The strings are equal\n");
  } else {
    printf("The strings are NOT equal\n");
  }
}
