/*
 * The effect we got in the last task was that the we executed the while loop
 * before checking the condition. This can also be achived using do-while loop.
 * To use the do-while loop: `do{ statments; }while(condition);`
 *
 * We still want to print 5 once.
 */
#include <stdio.h>

int main() {
  int i = 5;
  while (i < 5) {
    printf("%d\n", i);
  }
}
