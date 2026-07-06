/*
 * This problem has two potential solutions. The intended way only modifies
 * 'init_cords'
 */
#include <stdlib.h>
#include <stdio.h>

struct cords {
  int x;
  int y;
};

struct cords *init_cords(int x, int y) {
  struct cords *my_cords;
  my_cords->x = x;
  my_cords->y = y;
  return my_cords;
}

void print_cords(struct cords *cords) {
  printf("x: %d, y: %d\n", cords->x, cords->y);
}

int main() {

  struct cords *cords = init_cords(5, 6);
  print_cords(cords);
}
