/*
 * Some of the symbols you might want to place in a string will be interperted
 * by the C compiler. One such character is the quotation mark ("). To use such
 * characters in a string place a backslash (\) in front of the character.
 */
#include <stdio.h>

int main() {
  char *string = "Quotation mark: "";
      printf("%s\n", string);
}
