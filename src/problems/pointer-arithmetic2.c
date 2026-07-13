/*
 * You can't add pointers, but you can subtract pointers of the same type. This
 * will not return the distance between them in bytes but in elements of the
 * pointer's type.
 *
 * This program tries to assert the length of the array.
 */
#include <assert.h>

int main() {
  int arr[4] = {0};

  assert(&arr[0] - &arr[4] == 4);
}
