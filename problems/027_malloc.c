/* When creating an array we are pushing the elements in the correct order on
 * the stack and then we save the pointer to the first element. Each function
 * has its own stack, and a function can't access the stack to a function it has
 * called. If a function want save data that caller function needs access to,
 * then it can use 'malloc'. 'malloc' is a function that takes the number of
 * bytes you need as an argument. This function will allocate memory, that will
 * persist until you call free.
 *
 * There also exists another version of 'malloc' called 'calloc'. 'calloc' takes
 * two arguments, number of elements and size of each element. 'calloc' will
 * simply allocate number of elements * size, and set it all to zero.
 *
 * Hint: `sizeof(int)` will give you the number of bytes in one int
 *
 */
#include <stdio.h>
#include <stdlib.h>

// No problem here
float find_avrg(int *arr, size_t n) {
  size_t sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return (float)sum / n;
}

int *init_array(int n) {
  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 100;
  }
  return arr;
}

int main() {
  srand(0);
  int n = rand() % 100;

  int *arr = init_array(n);

  float avrg = find_avrg(arr, n);

  printf("Average is: %.1f\n", avrg);
}
