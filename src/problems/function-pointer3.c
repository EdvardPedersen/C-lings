/*
 * You can save a generic function pointer by casting to generic functin pointer
 * when you save the pointer, but remember to cast back to the correct function
 * pointer.
 */
#include <stdio.h>

typedef void (*generic_function_t)(void);
typedef int (*int_function_t)(int, int);
typedef float (*float_function_t)(int, int);

typedef struct my_struct {
  generic_function_t function;
} my_struct_t;

int add(int a, int b) {
  return a + b;
}
int sub(int a, int b) {
  return a - b;
}

int mul(int a, int b) {
  return a * b;
}

float div(int a, int b) {
  return (float)a / b;
}

int main() {
  my_struct_t my_struct;
  my_struct.function = (generic_function_t)div;

  float_function_t my_function = my_struct.function;
  printf(" 5/3 = %f\n", my_function(5, 3));
}
