/*
 * Sometimes it can be beneficial to save a pointer as a int. If you for exampel
 * want to normal arithmatic on it. However a normal 'int' is not guaranteed to
 * be big enough to contain the entire pointer, so casting from pointer to int
 * is not a good idea. Luckely there exist a type 'intptr_t' in the 'stdint.h'
 * header. This type is always guaranteed to be big enough to contain an int.
 */
#include <assert.h>
#include <stdint.h>

int main() {
  int a = 5;
  int *b = &a;

  int ptr = (int)b;
  ptr += 1;

  assert(b < (int *)ptr && (int *)ptr < b + 1);
}
