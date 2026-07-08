#include <stdio.h>

struct cords {
  int x;
  int y;
};

int main() {
  cords my_cords = {.x = 5, .y = 7};
  printf("x: %d, y: %d\n", my_cords.x, my_cords.y);
}
