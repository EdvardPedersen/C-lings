/*
 * In some cases you want an array of strings, but strings are just arrays
 * (pointers to the first character where the rest of the characters lies after
 * each other in memory ending with a zero terminator). This means an array of
 * strings will after array decay boil down to a pointer to a pointer. To
 * declare a pointer to a pointer you just add another star in the declaration.
 * E.g. 'int **ptrptr;'
 *
 * You can also have an array of pointers by declaring it like so
 * 'type *name[num];'
 */
#include <stdio.h>

void print_string_array(char **string_array, int len) {
  for (int i = 0; i < len; i++) {
    printf("%s\n", string_array[i]);
  }
}

int main() {
  char **strings;
  strings[0] = "String 1";
  strings[1] = "String 2";
  strings[2] = "String 3";

  print_string_array(strings, 3);
}
