/*
 * A recursive function is when a function calls it self. This is an way to
 * create a type of loop. One only need to be careful to have a stop condition,
 * or else you will end up creating a infinite loop.
 */
#include <stdio.h>

void print_triangle_line(int n) {
  if (n == 0) {
    printf("\n");
    return;
  }
  printf("*");
  print_triangle_line(n - 1);
}

void print_triangle(int n) {
  print_triangle_line(n);
  print_triangle(n - 1);
}

int main() { print_triangle(6); }
