/*
 * ((5 - 10) multiplied by a), plus one
 */
#include <assert.h>

int main() {
  int a = 5;
  assert(++a * 5 - 10 == -24);
}
