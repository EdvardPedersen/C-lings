#include <stddef.h>
#include <stdio.h>

int count_digits(const char *string) {
  int count = 0;
  for (const char *c = string; *c != '\0'; c++) {
    if (*c >= 0 && *c <= 9) {
      count++;
    }
  }

  return count;
}

int main() {
  char *string = "The first 15 digits of pi is 3.141592653589793";

  printf("The string: "%s" contains %d digits", string, count_digits(string));
}
