/* When you have a pointer variable, `int *a = &b`, you can change the value at
 * the address the pointer variable is pointing at, by using the deref. symbol,
 * e.g. `*a = 10`. But keep in mind that since 'a' was a pointer to 'b', if you
 * change the data at the address that 'a' points to you change the data in 'b'.
 *
 * We expect the a and b to swap, but nothing happens to a and b.
 *
 * Hint: You will need to modify the swap function signature
 * Hint2: You only need to place '*' and '&'
 */

#include <stdio.h>

void swap(int a, int b) {
  a += b;
  b = a - b;
  a -= b;
}

int main() {
  int a = 1;
  int b = 2;
  printf("a: %d, b: %d\n", a, b);
  swap(a, b);
  printf("a: %d, b: %d\n", a, b);
}
