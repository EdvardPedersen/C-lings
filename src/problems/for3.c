/*
 * The for loop is not limited to only counting. We can for example do as in the
 * code below. Here we iterate over a string, by first declaring a varible, 'c',
 * that we use to remember wher in string, but as a pointer instead of an index.
 * Then we check that the current character is not '\0', remember that each
 * string needs to end with a null terminator. Then we advance the pointer to
 * the next character. Pointers are just numbers so we can still do arithmetic
 * on them. This way we never have to care about the length of string.
 */
#include <stdio.h>

int main() {
  char *string = "Hello, world!";
  for (char *c = string; c != '\0'; c++) {
    printf("%c\n", *c);
  }
}
