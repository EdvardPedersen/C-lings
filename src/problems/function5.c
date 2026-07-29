/*
 * We have implemented our own number printer
 *
 * putchar just prints a single character to the screen.
 */
#include <stdio.h>

void print_num(a) {

  // Print '-' if a is less than 0
  if (a < 0) {
    putchar('-');
    a *= -1; // Now that we have printed the '-' we can just deal with the
             // number like a positive number
  }

  // Reverse the number, we do this since we print the number backwards
  int c = 0;
  while (a) {
    c *= 10; // Shifting c on to the left in the decimal system

    c += a % 10; // Adding the lowest digit of a

    a /= 10; // We remove the last digit by dividing by 10. Sinc a is an int
             // dividing will always return an int and it will always round
             // down. E.g. 123/10 = 12. Shifting the number by one to the right
             // in the decimal system
  }

  // Printing the smallest digit in the number then removing it from the number
  // until the entire number is printed
  while (c) {
    putchar((c % 10) +
            '0'); // The character for a single digit is obtaind by
                  // adding it to the character '0'. Remember that char is just
                  // a number that represents a character. If you look at the
                  // ascii table '1' is just '0' + 1, '2' = '0' + 2 and so on.

    c /= 10; // Removing the lowest digit of c.
  }
}

int main() {
  print_num(-12345);
}
