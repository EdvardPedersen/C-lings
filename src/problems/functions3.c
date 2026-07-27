/*
 * Function need to be declared before being called. This can be done either by
 * defining it in the usual way, or by declaring it. E.g.: 'void
 * function_name();', then you can define it wherever you want.
 */
#include <stdio.h>

int main() {
  print_hello_world();
}

void print_hello_world() {
  printf("Hello World\n");
}
