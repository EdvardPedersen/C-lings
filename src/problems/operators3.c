/*
 * You can't use ++/-- after a cast
 *
 * Trying to write down the alphabet
 */
#include <stdio.h>

int main() {
  int i = 'A' - 1;
  float a = 0;
  while (i < 'Z') {
    printf("%c\n", ++(char)i);
  }
}
