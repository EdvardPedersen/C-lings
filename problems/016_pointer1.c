/* A pointer is a variable that contains the memory address of another varialeb.
 * We declare a pointer variable with `TYPE *NAME`, e.g. `int *pointer` will
 * make a variable named 'pointer' that can contain the address of a int. To get
 * the address of a variable we use the symbole '&', so if we have a int called
 * number and do `int *pointer = &number`, then we now have a variable called
 * 'pointer' that contains the memory address of the variable 'number'. To read
 * what is at the memory address i.e. read the data stored at the address rather
 * than the address, we use the dereference symbole '*' infront of the variable
 * name when we use it.
 *
 * This program tries to read the contents of 'a' using a pointer.
 */
#include <stdio.h>

int main() {
  int a = 10;

  int *b = &a;

  printf("%d\n", b);
}
