#include <stdio.h>

#define INIT_X()                                                               \
  x = 0;                                                                       \
  x++
#define INIT_Y()                                                               \
  x = 0;                                                                       \
  x--

int main() {
  int x;
  int x_or_y = 1;

  if (x_or_y)
    INIT_X();
  else
    INIT_Y();

  printf("x = %d\n", x);
}
