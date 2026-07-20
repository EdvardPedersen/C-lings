/*
 * The 'static' keyword will tell the compiler that the a variable should have a
 * lifetime equal that of the program. This means that that the variable will
 * always persist. It will also not live in the stack segment but eiher the BSS
 * segment or the DATA segment, depending on if it is initialized or not.
 *
 * My function is suppose to print the number of times it has been called.
 */
#include <assert.h>
#include <stdio.h>

void my_function() {
  int count;
  count++;
  printf("my_function has been called %d times\n", count);
}
void other_function() {
  int a = 10;
  int b = 20;
  assert(a + b == 30);
}

int main() {
  my_function();
  other_function();
  my_function();
  other_function();
  my_function();
  other_function();
  my_function();
  my_function();
  other_function();
  my_function();
}
