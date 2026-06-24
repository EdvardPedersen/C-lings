/* When you use 'malloc' or 'calloc' you ask the operating system for memory.
 * This memory will not be returned to the operating system until you free it.
 * So if you allocate memory you also need to free it. This is done by using the
 * 'free' function from 'stdlib.h'. This function takes one argument, the
 * pointer to the memory you want to free. Make sure that this memory was
 * allocated using 'malloc' or 'calloc'.
 *
 *
 * This program tries to find the average of an array with random length.
 */
#include "leak.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// No problem here
float find_avrg(int *arr, size_t n) {
  size_t sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return (float)sum / n;
}

int main() {
  init_test();
  srand(0);

  size_t array_size = (rand() % 1000) + 40000;

  int *nums = calloc(array_size, sizeof(int));

  for (int i = 0; i < array_size; i++) {
    nums[i] = rand() % 100;
  }

  float avrg = find_avrg(nums, array_size);

  test_memory(); // Don't remove me
  printf("Average is: %.1f\n", avrg);

  return 0;
}
