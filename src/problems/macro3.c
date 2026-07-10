#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
  int i = 1;
  while (i <= 15) {
    printf("%d\n", SQUARE(i++));
  }
}
