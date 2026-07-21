/*
 * Sometimes it is convinient to be able to assign a variable in a while loop
 * condition.
 *
 * Hint '!=' has precedence over '='
 */
#include <stdio.h>

void print_string(char *string) {
  char c;
  while (c = *(string++) != 0) {
    putchar(c);
  }
}

int main() {
  print_string("Hello, World!\n");
}
