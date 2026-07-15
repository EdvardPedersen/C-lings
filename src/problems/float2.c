/*
 * In the last problem, the problem stems from that all immediate decimal number
 * are by default a double (float with double the precision). We can actually
 * tell the compiler that immediate is a flot and not a double by placing an f
 * after the immediate.
 *
 * Remark that direct comparisons between floats are still generaly not good and
 * in more complex programs one should always use epsilon comparison.
 */
#include <math.h>

int main() {
  float num = (3 + 0.14) / 2;
  if (num == 1.57) {
    return 0;
  }
  return -1;
}
