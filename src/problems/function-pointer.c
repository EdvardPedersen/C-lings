/*
 * In C you can save the pointer for a function in an array, pass it as an
 * argument or save it in a struct, and use that pointer to call that function
 * later.
 *
 * To define an array of function:
 * return_type (*array_name[])(argument_type, argument_type, etc.);
 *
 * To get the address of a function, just write the the function name. E.g.:
 * 'array_name[0] = function_narme'
 */
#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int main() {

  (*operators[])(int, int) = {add, sub};

  int list1[10] = {1, 5, 8, 3, 2, 5, 7, 3, 2, 7};
  int list2[10] = {4, 6, 9, 1, 5, 4, 7, 2, 82, 37};

  for (int i = 0; i < 10; i++) {
    printf("%d\n", operators[i % 2](list1[i], list2[i]));
  }
}
