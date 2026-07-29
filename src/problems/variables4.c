/*
 * C makes no guarantee that uninitialized declared variable is set to zero.
 */
#include <assert.h>

void func() {
  int a = 10;
}

void func2() {
  int a;
  a *= 5;
  a -= 3;
  a *= -10;
  assert(a == 30);
}

int main() {
  func();
  func2();
}
