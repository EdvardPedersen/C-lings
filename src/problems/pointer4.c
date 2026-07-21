/*
 * You can index pointers the same way you would index an array. But be carefull
 * indexing a pointer is the same as dereferencing it.
 *
 * Remember that without an initialization a pointer won't have defined address
 * (in some cases it will be zero, but there are no gurantees for this). But an
 * unitialized array (where you specify size) will be given space on the stack,
 * and will automaticaly be pointing there.
 */
#include <stdio.h>

int main() {
  char *string;

  string[0] = 'H';
  string[1] = 'e';
  string[2] = 'l';
  string[3] = 'l';
  string[4] = 'o';
  string[5] = '\0';

  printf("%s\n", string);
}
