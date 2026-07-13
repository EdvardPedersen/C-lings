/*
 * Sometimes we need to change the size of a allocated area after it has been
 * allocated. In our exampel we only want one loop through the string so we
 * don't know how big our out array needs to be before the loop, but we need it
 * in the loop. So, we allocate the theoretical max and then we shave of the
 * byte we don't need after the loop. To do this we use the 'realloc' function.
 * 'realloc' takes in two arguments: first the pointer to the allocated memory,
 * and then the new size of the memory. It outputs the new pointer, this is
 * sometimes the same pointer, but not always.
 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * spliting a string at a given delimiter. The delimiter is removed
 *
 * @Arg: char *in: the string to slice.
 * @Arg: char del: the character to split on
 *
 * @Ret: char **: A null terminated array of pointers to the portions of the
 * string. It is the callers responsibility to free the array.
 */
char **split(char *in, char del) {
  char **out = malloc(sizeof(char **) * strlen(in));

  out[0] = in;

  int i = 1;
  for (char *c = in; *c != '\0'; c++) {
    if (*c == del) {
      out[i++] = c + 1;
      *c = '\0';
    }
  }
  out = realloc(sizeof(char **) * (i + 1), out);
  out[i] = NULL;
  return out;
}

int main() {
  char string[] = "Hello, world!";
  char **splits = split(string, ',');

  printf("The splits are:\n");
  for (char **s = splits; *s != NULL; s++) {
    printf("\t%s\n", *s);
  }
}
