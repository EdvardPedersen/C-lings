/* If you want a function to take in multiple different number of arguments one
 * can use stdarg. To use stdarg you need to define a function that has at least
 * one argument, and have the last argumen be three dots, e.g. `int sum(int
 * nelms, ..);`. Then inside the function you first need to make an argument
 * variable, e.g. `va_list args;`, then you need to call 'va_start' with the
 * argument variable and the last definite argument, e.g. `va_start(args,
 * nelm);`. To get the arguments you can call 'va_arg' with the argument
 * variable and the argument type, to get the next argument.
 *
 * This program wants to sum 5 numbers.
 */
#include <stdarg.h>
#include <stdio.h>

int sum(int nelm, ...) {
  va_list args;

  int total = 0;
  for (int i = 0; i < nelm; i++)
    total += va_arg(args, int);

  return total;
}

int main() {
  printf("Toatl: %d\n", sum(5, 1, 2, 3, 4, 5));
  return 0;
}
