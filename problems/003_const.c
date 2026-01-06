/*
 * This time we've learned, we're using the data type
 * that we intended! However, when we try to change it,
 * we're _not_ getting what we want.
 *
 * The const keyword specifies that a value cannot be changed.
 *
 * Note that in this program, we are using assert() to
 * verify that the program is working correctly. Assert
 * will abort the program if the statement in the parenthesis
 * is not true (as long as debugging is enabled).
 */

#include<assert.h>

int main() {
    const int a = 10;
    a += 10;
    assert(a == 20);
}
