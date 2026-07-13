/*
 * To copy a str in C you can't just `char* new = old;`, as this will only copy
 * the address to the same string. To copy a string you need to first find a new
 * space in memory for the new string, and then copy all the data from the first
 * string to the new string.
 *
 * This copy can be done using the 'memcpy' function from 'string.h'. This
 * function takes three arguments, first the destination address, then the
 * source address, and lastly the number of bytes. This function copies n bytes
 * from dest to src.
 *
 * There also exists a 'strcpy'. This function only takes a dest and src, using
 * the null terminator of string instead of a third argument.
 *
 * Hint: the new string needs `sizeof(char) * (strlen(in) + 1)` bytes, the `+1`
 * comes from the fact that we need a null terminator and 'strlen' doesn't count
 * the null terminator
 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * spliting a string at a given delimiter. The delimiter is removed
 *
 * @Arg: const char *in: the string to slice.
 * @Arg: char del: the character to split on
 *
 * @Ret: char **: A null terminated array of pointers to the portions of the
 * string. It is the callers responsibility to free both the array and the
 * underlying string. There is only one string, so calling free on the first
 * element of the array is enough.
 */
char **split(const char *in, char del) {
  char **out = malloc(sizeof(char **) * strlen(in));

  // copying the string
  char *new_string = in;
  out[0] = new_string;

  int i = 1;
  for (char *c = new_string; *c != '\0'; c++) {
    if (*c == del) {
      out[i++] = c + 1;
      *c = '\0';
    }
  }
  out = realloc(out, sizeof(char **) * (i));
  out[i] = NULL;
  return out;
}

int main() {
  char *string = "Hello, world!";
  char **splits = split(string, ',');

  printf("The original string was: %s\n", string);
  printf("The splits are:\n");
  for (char **s = splits; *s != NULL; s++) {
    printf("\t%s\n", *s);
  }
}
