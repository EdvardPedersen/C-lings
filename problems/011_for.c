/*
 * This program is supposed to print every odd number between 0
 * and 20, but it's not printing anything right now!
 *
 * To avoid problems like we observed in the last program,
 * we have used a different loop construct, the for loop, which
 * makes it a bit easier to remember to modify the condition.
 *
 * The structure of a for loop is as follows:
 *
 * for(precondition; condition; postcondition) {
 *     //code block
 * }
 *
 * The precondition is evaluated before the loop starts,
 * the condition is evaluated for every iteration of the loop,
 * and the postcondition is evaluated after the condition.
 *
 * Hint: x % 2 == 1 is true for every odd number, but we have
 * performed an optimization in the loop which ensures we will
 * never find an odd number!
 */

#include <stdio.h>

int main() {
    for(int x = 0; x < 20; x = x + 2) {
        if(x % 2 == 1)
            printf("%d is odd\n", x);
    }
}
