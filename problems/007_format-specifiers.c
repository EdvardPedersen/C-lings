/* When you want to insert variables into a print, we can use printfs format
 * specifiers. We place these in the string where we want the variables placed.
 * There are different specifiers for different variable types.
 *
 * %d: int(base 10), %c: character, %s: string, %f: float, %x: int(base 16).
 * An exhaustive list can be found:
 * https://en.wikipedia.org/wiki/Printf#Format_specifier
 *
 * This program wants to print a character
 */
#include <stdio.h>

int main() {
  char a = 'a';
  printf("%d\n", a);
}
