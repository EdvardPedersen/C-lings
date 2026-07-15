/*
 * The standard library provides functions to convert numbers in a string to
 * actuall numbers. 'atoi' converts string to int, and 'atof' converts string to
 * float.
 */
#include <assert.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char *my_string = "3.14";

  float my_float = atoi(my_string);

  assert(fabs(my_float - 3.14) < 0.01);
}
