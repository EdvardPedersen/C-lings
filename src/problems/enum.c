/*
 * You can give specific values enum elements using equal sign.
 *
 * In this program we want the status enum to have the http status code.
 *
 * https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference
 */
#include <stdio.h>

enum status { OK, NOT_FOUND, FORBIDEN, IM_A_TEAPOT };

int main() {
  printf("OK = %d, NOT FOUND = %d, FORBIDEN = %d, I'M A TEAPOT= %d\n", OK,
         NOT_FOUND, FORBIDEN, IM_A_TEAPOT);
}
