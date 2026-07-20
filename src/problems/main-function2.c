/*
 * The main function takes in two arguments: argc(argument count), and
 * argv(argument vector). argc are the number of arguments the program take in.
 * And argv is an array with all the arguments in correct order.
 * The arguments are space seperated.
 * It should be noted that the program name itself is also a part of the
 * arguments. e.g.: './a.out hello', here argc is 2 and argv[0] will point to
 * './a.out' and argv[1] will point to 'hello'
 *
 * This program tries to print all the arguments of the program except the
 * program name.
 */
#include <stdio.h>

int main(int argc, char **argv) {
  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }
}
