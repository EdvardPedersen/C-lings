/*
 * Until now, we have only looked at programs which
 * are evaluated from top to bottom, line by line.
 *
 * However, many programs need to jump to a preceeding
 * segment of code, for example to repeat something.
 *
 * To achieve this, we can use a construct known as a
 * loop. This construct allows us to repeat a block of
 * code until some condition occurs.
 *
 * The structure of a while loop is as follows:
 *
 * while(condition) {
 *     //code block
 * }
 *
 * In this loop, the code in the code block will be executed until
 * the condition evaluates to false.
 *
 * One thing that is important to remember, is that condition must
 * at some point evaluate to false, which does not happen in the
 * code below.
 */

#include <stdio.h>

int main() {
    int counter = 0;
    while(counter < 10) {
        printf("Loop number %d\n", counter);
    }
    return 0;
}
