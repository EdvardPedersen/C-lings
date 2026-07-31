#include <stdio.h>

char *get_string() {
  char my_string[] = "Hello, World!";

  return my_string;
}

int main() {
  printf("%s\n", get_string());
}
