/* When declaring an arrary in C, the compiler knows how big it is at compile
 * time, therefor 'sizeof' knows how big the array is. A pointer to the first
 * element in an array don't know how big the array is, so 'sizeof' will just
 * return the size of the pointer which on 64bit machins is 8 bytes. A function
 * that takes in a generic length array can never know how long the array is, so
 * the array decays to a pointer.
 *
 * In this code we have extracted the median finding code to its own function
 * with the array as the sole argument.
 *
 * Hint: The array in the main function knows how long it is, so 'sizeof' will
 * give the total byte length of the entire array.
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

float find_median(int arr[]) {
  bubble_sort(arr, sizeof(arr) / sizeof(int));

  if (sizeof(arr) / sizeof(int) % 2 == 0) {
    // If we have even number of elements, the median is the avrage of the two
    // in the middle
    int midpoint = sizeof(arr) / sizeof(int) / 2;
    return (float)(arr[midpoint - 1] + arr[midpoint]) / 2;
  } else {
    // If it is odd, the median is just the middle element
    int midpoint = sizeof(arr) / sizeof(int) / 2;
    return arr[midpoint];
  }
}

int main() {
  int arr[] = {4, 3, 1, 6, 9, 2, 10};

  float median = find_median(arr);
  printf("The median is: %.1f\n", median);
}
