/*
 * You can use typedef to shorten the function pointer declarations.
 *
 * typedef return_type (*typedef_name)(arg_type, etc.)
 */
#include <stdio.h>

typedef int (*operator_func)(int);

int add(int a, int b) {
  return a + b;
}
int sub(int a, int b) {
  return a - b;
}

int main() {
  operator_func operators[] = {add, sub};

  printf("10 - 3 = %d\n", operators[0](10, 3));
}
