/* I wonder what 10 divided by every number between 10 and 1 is as integers. */
#include <stdio.h>
int main() {
  int a = 10;
  for (int i = 10; i >= 0; i--) {
    printf("10/%d = %d\n", i, a / i);
  }

  return 0;
}
