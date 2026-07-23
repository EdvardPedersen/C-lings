/*
 * How much space in memory will this bitfield take
 */
#include <assert.h>

int main() {
  struct {
    unsigned char a : 2;
    unsigned char b : 3;
    unsigned char c : 4;
    unsigned char d : 1;
  } my_bitfield;

  assert(sizeof(my_bitfield) == ??);
}
