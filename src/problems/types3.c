/*
 * In C types are just a way to declar how much memory a variable is. So if you
 * are careful enough you can create a string by using a int by makeing sure
 * each individual byte of the int is a ascii value.
 *
 * Most machines uses something called little endian. This means that bytes of
 * for exampel a int will be stored in the opposite order of what we read them.
 * E.G: 0x0102 will be stored 0x01, and then 0x02 in memory.
 *
 * Tips: 2 didgits in the hexadecimal system is a byte, and 0x is the prefix for
 * hexadecimal number in C
 */
#include <stdint.h>
#include <stdio.h>

int main() {
  uint64_t string = 0x48656c6c6f;
  printf("%s\n", (char *)&string);
}
