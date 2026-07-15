/*
 * Comparing floats is not trivial. Float arithmetic is never 100% correct. A
 * way to compare is to check if the absolute value of the difference is smaller
 * than some epsilon(small number). To get the absolute value of a float in C
 * you can use 'fabs()' from 'math.h'.
 */
#include <math.h>

int main() {
  float num = (3 + 0.14) / 2;
  if (num == 1.57) {
    return 0;
  }
  return -1;
}
