/*
 * As with every other data type, you can have a pointer to a struct. However
 * when we want to access the elements of the struct we need to dereference it
 * first. We can do this the normal way by putting a '*' infront, e.g.
 * `(*var).field`, notice the parentheses, we need to deref. before accessing.
 * When coding in C we deal with sturct pointers quit often and it would be
 * tedious to do this deref. every time we want to access a field. Luckily C
 * provides a short hand for this, '->'. So if 'var' is a pointer struct with a
 * field called 'field' we can access this field like this: `var->field`.
 */
#include <stdio.h>

struct cord {
  int x;
  int y;
};

void set_cords(struct cord *cord, int x, int y) {
  cord.x = x;
  cord.y = y;
}

int main() {

  struct cord cord = {0};
  set_cords(&cord, 4, 3);

  printf("x: %d, y: %d\n", cord.x, cord.y);
}
