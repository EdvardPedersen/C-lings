/*
 * To make things a bit more explicit, we've decided to use
 * stdint.h to specify the width of the data types we use.
 *
 * However, we're not getting the result we expect here.
 *
 * stdint.h contains definitions of data types with a width,
 * so that "unsigned int" becomes "uint32_t", for a 32-bit
 * unsigned integer.
 *
 * A hint to what could be wrong here: what is the maximum number
 * that can be represented by 8 bits?
 */

#include <stdint.h>
#include <assert.h>

int main() {
    uint32_t big_number = 1000;
    uint8_t small_number = 10;
    uint8_t combined = big_number + small_number;
    assert(big_number + small_number == combined);
}
