/*
 * Sometimes, it can be helpful to evaluate the result of
 * an assignment in a conditional.
 *
 * The program below is legal, but when we compile it, we
 * are given a (sensible!) warning due to missing parenthesis.
 *
 * Insert parenthesis to clarify the code and silence the warning.
 */

#include <assert.h>
#include <stdio.h>

int main() {
    int a = 10;
    if(a = a + 10 == 20) {
        printf("a + 10 == 20\n");
    }
    if((a -= 5) == 15) {
        printf("a - 5 == 15\n");
    }
    assert(a == 15);
}
