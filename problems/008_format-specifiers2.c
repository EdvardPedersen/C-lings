/* When dealing with for example floats, we sometimes only want to print a
 * certain number of decimals, this can also be achieved with format specifiers.
 * by placing a '.PRECISION' before the letter declaring the type you can
 * specify the precision, e.g. "%.3f" will print a float with 3 decimals.
 *
 * This program wants to print pi with 4 decimals.
 */

#include <stdio.h>

int main() {
  float pi = 3.14159265368979;
  printf("Pi: %f\n", pi);
}

