/*
 * We have created a program for calculating fibonacci
 * numbers, which is a sequence of numbers where each number
 * is the sum of the two preceeding numbers, starting with
 * 1 and 1.
 *
 * Since we want to have some idea of what is going on as
 * we compute the numbers, we have created a function
 * (my_function), which takes in two numbers, adds them,
 * prints the result, and returns the result.
 *
 * Functions are defined by specifyign the return type,
 * the name of the function, and the arguments passed to
 * the function in parenthesis (with types).
 */

#include <stdio.h>

int my_function(int first, int second) {
    int result = first + second;
    printf("Function call result: %d\n", result);
}

int main() {
    int a = 1;
    int b = 1;
    while(b < 100) {
        int c = my_function(a, b);
        a = b;
        b = c;
    }
    return 0;
}
