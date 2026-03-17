/*
 * We've made a program, in which we
 * intend to set a variable (a) to the value
 * of -10, and then add 2 to it, so we end up
 * with -8, which we print.
 *
 * However, our program definately does not
 * print that the value is -8.
 *
 * There are a few concepts we should explore to
 * find a suitable solution.
 *
 * The unsigned keyword specifies that a variable
 * can not represent negative numbers. So if we have
 * an unsigned int, this variable can not hold the
 * value -10.
 *
 * printf is able to print values of variables when
 * given a format specifier, %u is the format specifier
 * for unsigned integers. %d is the format specifier
 * for signed integers.
 */

#include <stdio.h>

int main() {
    unsigned int a = -10;
    a += 2;
    printf("The value of a is %u\n", a);
    return 0;
}
