/*
 * The standard library provides a random number generator. As with all computer
 * generated random numbers it is only pseudo random. This means that given the
 * same initial state the sequence of random numbers will be the same. The
 * initial state is called a seed, which is just a int. We can set this with
 * the function 'srand'. Normaly one uses the current time as seed, this will
 * mean that every time you run the program the seed is different and therefor
 * the sequence of 'random' numbers will be different.
 *
 * The random number given by 'rand' will be between 0 and RAND_MAX. To get it
 * between a desired interval you can use the modulo operator.
 */
#include <stdlib.h>
#include <time.h>

int test_value(int value) {
  srand(5);
  if (rand() % 50 == value) {
    return 0;
  }
  return -1;
}

int main() {
  srand(time(NULL));

  int value = rand();
  return test_value(value);
}
