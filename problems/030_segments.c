/* In memory the program is divided into different segments, the most imoprtant
 * ones are: text, bss, rodata, data, stack.
 *
 * The text segment is where the code lives, and is read only memory.
 *
 * The bss segment is where all the global/static unitialized variables are,
 * e.g. `static int a;`, here a will be placed in bss. This segment is both
 * readable and writeable.
 *
 * The rodata segment is where all constants lives, e.g. `static const int a =
 * 1;`, here gcc will place 'a' in the rodata segment, string literals are also
 * placed here. Rodata is a read only.
 *
 * The data segment is where all the non-constant data defined at compile time
 * lives, e.g. `static int a = 1`, here gcc will place 'a' into the data
 * segment. Data is both readable and writeable.
 *
 * The stack is a LIFO(Last in First out) storage for non-global/not-static
 * variables, e.g. `int a[2] = {1,2}`, here gcc will place the array on the
 * stack. The stack is both readable and writeable.
 *
 * It should be noted that segment name and placement is not guaranteed by the C
 * standard, but on most systems it is as described above.
 *
 * When creating an string like `char *string = "String"` you tell the compiler
 * to make a string literal and point to the first character. If you however do
 * `char string[] = "String"` you still make a string literal but since you are
 * now making an array, it will be copied to the stack, and then point to the
 * first character in the stack.
 *
 * This program encounters an error because something is in the wrong segment.
 *
 */

#include <stdio.h>

int main() {
  char *string = "Test Stting";
  string[7] = 'r';
  printf("%s\n", string);
  return 0;
}
