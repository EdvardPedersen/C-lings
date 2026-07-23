/*
 * When definig a struct you can specify how many bits a field should use by
 * placing a colon and the number of bits after field declaration. This is
 * usefull when you don't have tons of memory.
 *
 * Hint: you can't address individual bits.
 */
#include <stdio.h>

void swap(int *a, int *b) {
  *a += *b;
  *b = *a - *b;
  *a = *a - *b;
}

int main() {
  struct {
    unsigned char a : 1;
    unsigned char b : 1;
  } flags;

  flags.a = 1;
  flags.b = 0;

  swap(&flags.a, &flags.b);

  printf("a: %d, b; %d\n", flags.a, flags.b);
}
