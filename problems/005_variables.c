/*
 * In this program, we're trying to do some
 * calculations, but we're having some trouble.
 *
 * Variables are the way we refer to things that
 * can have different values through the execution
 * of the program.
 *
 * In this case, we want to use the assignment operator
 * (=) to assign a value to the variables a and b, and
 * store the sum of these two variables in the variable a.
 *
 * Note that variables can be declared (int b) without
 * assigning a value to them, in which case the contents of
 * the variable are undefined. But the variable must be
 * declared before using it (or at the same time).
 */

#include <assert.h>

int main() {
    int a = 10;
    b = 20;
    int b;
    a = a + b;
    assert(a == 30);
    return 0;
}
