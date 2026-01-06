/*
 * We've used loops to jump around in our code, but in this program we want
 * some more freedom.
 *
 * The program is supposed to print out all numbers between 0 and 1000 which are
 * divisible by 13, but it seems that we've been a bit careless with our logic,
 * so the program terminates after finding the first number.
 */

#include <stdio.h>

int main() {
    int a = 0;
loop:
    a += 1;
    if(a % 2 == 0) {
        goto check;
    }

    if(a % 13 == 0) {
        goto print_divisible;
    }

check:
    if(a < 1000) {
        goto loop;
    }

    printf("A: %d\n", a);

print_divisible:
    printf("%d is divisible by 13\n", a);
}
