/*
 * Luckily there exists an easier way to define strings then how we did in the
 * last task, by enclosing the text in "" you can define a string literal, this
 * will also automatically add the zero terminator. It is important to use
 * double quotes as single quotes define only a single character.
 */
#include <stdio.h>

int main() {
  char *my_string = 'Hello, World!';
  printf("%s\n", my_string);
}
