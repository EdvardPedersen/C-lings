/*
 * We have previously used the 'strcat' function, in this exercise we have
 * implemented our own version, but there is a problem in our 'strcat' function.
 */

#include <stdio.h>

void my_strcat(char *string1, const char *string2) {
  char *c;
  for (c = string1; *c != '\0'; c++)
    ;

  const char *cc;
  for (cc = string2; *cc != '\0'; *c++ = *cc++)
    ;
}

int main() {
  char string1[20] = "Hello, ";
  char string2[] = "World";
  string1[12] = 'B';

  printf("string1: %s, string2: %s, 13th char in the array of string1: %c\n",
         string1, string2, string1[12]);

  my_strcat(string1, string2);

  printf("%s\n", string1);
}
