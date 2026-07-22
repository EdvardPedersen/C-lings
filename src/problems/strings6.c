/*
 * "" defines a string litteral. '' defines a char. The first is a pointer to a
 * place in rodata, the second is a byte (on most systems).
 */
#include <stdio.h>

int main() {
  char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVXYZ";

  int i;
  for (i = 0; i < 26; i++) {
    if (alphabet[i] == "M") {
      break;
    }
  }

  printf("M has index %d in the alphabet\n", i);
}
