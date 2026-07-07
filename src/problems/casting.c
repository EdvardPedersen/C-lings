/*
 * To convert one data type to another in C you use something called casting.
 * This is done by placing the desired data type inside parentheses infront of
 * the value you want to cast.
 *
 * Two ints divided in C will always be rounded down, however a float divided by
 * an int will result in a float.
 */
#include <stdio.h>

int main() {
  int int1 = 13;
  int int2 = 2;

  float float1 = int1 / int2;

  printf("%d/%d=%.1f", int1, int2, float1);
}
