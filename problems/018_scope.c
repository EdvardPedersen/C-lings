/*
 * In this program we are trying to find the median of an array.
 */

#include <stdio.h>

void bubble_sort(int *arr, int n) {
  char swapped = 1;
  while (swapped) {
    swapped = 0;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        // swapping element i with element i+1
        arr[i] += arr[i + 1];
        arr[i + 1] = arr[i] - arr[i + 1];
        arr[i] -= arr[i + 1];
        swapped = 1;
      }
    }
  }
}

int main() {
  int arr[] = {4, 3, 1, 6, 9, 2, 10};
  bubble_sort(arr, sizeof(arr) / sizeof(int));
  if (sizeof(arr) / sizeof(int) % 2 == 0) {
    // If we have even number of elements, the median is the avrage of the two
    // in the middle
    int midpoint = sizeof(arr) / sizeof(int) / 2;
    float median = (float)(arr[midpoint - 1] + arr[midpoint]) / 2;
  } else {
    // If it is odd, the median is just the middle element
    int midpoint = sizeof(arr) / sizeof(int) / 2;
    float median = arr[midpoint];
  }

  printf("The median is: %.1f\n", median);
}
