/*
 * If you don't have brackets after; for, while, if, if-else, do-while, the c
 * compiler will not throw an error, but only the first following statment will
 * be executed as a part of that structure.
 */

#include <stdio.h>

int main(void) {
  for (int i = 0; i < 6; i++)
    printf("i = %d", i);
  printf("\n");
}
