/*
 * We have extended our fibonacci program to store many
 * numbers, so that we can look at the different parts of
 * the sequence. However, we're not getting the correct result
 * (0 and 1 are the first two fibonacci numbers, so the sum of
 * the first two numbers should be 1).
 *
 * To achieve this, we have used an array, which is a sequence
 * of variables.
 *
 * The syntax for creating an array (on the stack, we will come
 * back to this), is as follows:
 *
 * type variable[number of elements];
 *
 * This will allow you to access the elements with the syntax
 * variable[index], note that the first element is at index 0.
 */

#include <stdio.h>

int fibonacci(int number) {
    int a = 0;
    int b = 1;
    if(number < 1) return 0;
    for(int i = 2; i <= number; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int numbers[10];

    for(int i = 0; i < 10; i++) {
        numbers[i] = fibonacci(i);
    }

    int sum = numbers[1] + numbers[2];

    printf("The sum of the first 2 fibonacci numbers is %d\n", sum);
}
