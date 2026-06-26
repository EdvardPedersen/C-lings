/*
 * Here someone have been a little to eager freeing variables.
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
  int *arr = calloc(n, sizeof(int));
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

  free(arr);
  free(n);
  free(avrg);
}
