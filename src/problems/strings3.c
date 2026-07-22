/*
 * To get the size of a string we can't simply use 'sizeof'. 'sizeof' of the
 * pointer will just return the size of the pointer in memory, not what it is
 * pointing to, and if we use 'sizeof' on the dereferenced pointer we will just
 * get the size of a single character. Instead we need to find out how many
 * characters there are and multiply it by the number of bytes per character.
 *
 * This program wants to count the number of bytes a string uses in memory
 * including the zero terminator.
 */
#include <stdio.h>
#include <string.h>

int count_bytes(const char *string) {
  return sizeof(string);
}

int main() {
  char *string = "Hello, Wolrd!";

  int size = count_bytes(string);
  printf("The string '%s' occupies %d bytes in memory\n", string, size);
}
