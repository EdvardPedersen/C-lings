/*
 * In previous exercises we have used the function 'strlen' from the 'strings.h'
 * header. In this program we try to implement it our self, but something is
 * wrong.
 *
 * This can be solved using only one character.
 */

#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t my_strlen(const char *string) {
  size_t length;
  for (length = 0; string[length] != '\0'; length++)

  return length;

  // Don't use strlen from strings.h in here
}

int main() {
  char *string = "Hello";
  printf("Length of %s is %ld\n", string, my_strlen(string));
  assert(strlen(string) == my_strlen(string));
}
