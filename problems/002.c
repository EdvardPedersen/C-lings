/*
 * This time, we've managed to specify the return
 * type of the main function, but we've forgotten
 * to include the standard library for IO correctly!
 *
 * by using the preprocessing macro #include, we can
 * include functionality in our programs which have been
 * developed by others. C includes a standard library
 * which has many useful functions available, such
 * as "printf", which gives us output in the terminal.
 */


xxx <stdio.h>

int main() {
    printf("Hello world!\n");
    return 0;
}
