/* In C a string is just an array of characters. But as we know when passing an
 * array to a function, the function has no way of knowing how long the
 * array/string is. So that we don't have to remeber the length of every string
 * we use, we instead make sure that every string end with a zero byte. That way
 * when we iterate a string and encounter a zero byte we know we are at the end.
 *
 */
#include <stdio.h>

int main() {
  {
    char hello[] = {'H', 'e', 'l', 'l', 'o', ',', ' ',
                    'w', 'o', 'r', 'l', 'd', 0};
  } // Whenever we enclose code in curly brackets we get a new scope and stack
    // frame. So when we exit the brackets we forget all the variables inside.
    // We don't actually take the time to clear the data, just mark the memory
    // as free. If you want to cheat you can just remove the curly brackets.

  char string[] = {'A', 'B', 'C'};

  printf("%s\n", string);
}
