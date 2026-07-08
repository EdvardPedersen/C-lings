/*
 * In C you can define macros. A macro is just a value
 * (or function) given name. The compiler (the pre-proccessor) will copy paste
 * the value into every place you have used the macro name. You usually place
 * all macros at the top of the file.
 */
#include <stdio.h>

int main() {
  printf("Value is: %d", VALUE);
  return 0;
}

#define VALUE 10
