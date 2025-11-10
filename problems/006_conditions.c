#include <stdio.h>

int main() {
    int number = 10;
    number = number * 20;
    number = number - 20;
    number = number + 1;

    if(number < 100) {
        printf("The number is small!\n");
    } else if(number < 200) {
        printf("The number is big!\n");
    } else {
        printf("The number is pretty average...\n");
    }
    return 0;
}
