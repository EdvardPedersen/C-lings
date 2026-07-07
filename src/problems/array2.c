/*
 * Indexing in C starts at 0. So the first element of an array has the index 0.
 */

#include <stdio.h>

int main() {
  int digits_of_pi[] = {1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9};
  // Printing the 5th digit of pi
  printf("The 5th digit of pi is: %d\n", digits_of_pi[5]);
}
