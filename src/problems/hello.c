/*
 * Our program is supposed to print "Hello world!" and exit,
 * but it's not working right!
 *
 * Functions (like main in this case) need a _return type_,
 * which specifies what type of data the function will
 * return.
 *
 * Types are specified before the identifier, since we're
 * planning to return an integer (0) from this function, we can
 * indicate this by specifying the return type as 'int'
 */


#include <stdio.h>

xxx main() {
    printf("Hello world!\n");
    return 0;
}
