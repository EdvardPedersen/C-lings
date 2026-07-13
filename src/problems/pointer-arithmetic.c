/*
 * Since a pointer is just a number it is natural to assume that you can do
 * arithmetic on with it. One thing to keep in mind is that when adding to a
 * pointer, is that it will sizeof(type) times as much. E.g. `int *a = 0x00;
 * aa+=1`. Now 'a' will be equal to 4 (or however big an int is on your machine)
 * and not 1
 */
#include <assert.h>
#include <stdint.h>
#include <stdio.h>

int main() {
  int *pointer = 0x00;
  pointer += 0x10;

  assert((intptr_t)pointer == 0x10);
}
