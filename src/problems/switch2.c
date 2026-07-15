#include <stdio.h>

void print_num(int value, const char *str) {
  printf("%s%d\n", str, value);
}

int main() {
  int x = 2;
  switch (x) {
  case 1:
    int value = 12;
    print_num(value, "The value is: ");
    break;
  case 2:
    print_num(value, "value: ");
    break;
  }
}
