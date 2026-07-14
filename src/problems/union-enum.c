/*
 * Enums is just a way to assign a name to a number. It used when we for example
 * want to give something an id. Unions will take the size of it's biggets
 * element. All elements in a union has the same address.
 *
 * You can use a combination of unions, structs and enums to make a structure
 * that can take different forms. For example when the computer want to pass an
 * event to the a program. This event could either be that someone moved the
 * mouse or that someone pressed a key. These two events will have different
 * properties. If we make sure that both has a type enum at the start of both
 * structures then we can just check this type before using the event so that we
 * know which properties it has.
 */
#include <stdio.h>
#include <stdlib.h>

enum DataStructType { FLOATS, INTS };

struct float_cords {
  enum DataStructType type;
  float x;
  float y;
};
struct int_cords {
  long x;
  long y;
  enum DataStructType type;
};
union cords {
  struct float_cords float_cords;
  struct int_cords int_cords;
  enum DataStructType type;
};

void print_cords(union cords cords) {
  if (cords.type == FLOATS) {
    struct float_cords float_cords = cords.float_cords;
    printf("x: %f, y: %f\n", float_cords.x, float_cords.y);
  } else if (cords.type == INTS) {
    struct int_cords int_cords = cords.int_cords;
    printf("x: %ld, y: %ld\n", int_cords.x, int_cords.y);
  }
}

int main() {
  union cords cords;
  cords.int_cords.type = INTS;
  cords.int_cords.x = 15;
  cords.int_cords.y = 17;

  print_cords(cords);
}
