/*
 * This program attemps to do some simple calculations,
 * but we've forgot something important.
 *
 * Types in C are seperated into a few categories:
 *
 * integers numbers (whole numbers)
 * floating-point numbers (which resemble decimal numbers)
 * strings (which are represented as small unsigned integers,
 *   with some extra rules)
 *
 * integers can further be subdivided into signed
 * and unsigned variants, which determine if the variable
 * can represent negative numbers.
 *
 * In addition, floating-point numbers and integers can have
 * different sizes, which allow floating-point numbers to be
 * more accurate, and integers to represent larger numbers.
 */

#include <assert.h>

int main() {
    int a = 30;
    float b = 3.3;
    unsigned int c = a + b;
    assert(c > 33.1);
    return 0;
}
