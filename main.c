#include <stdio.h>
#include "examples.h"

int main() {
    char test[] = "A Taco Bell Tolls"; // Reverse expects a char array

    printf("Printd:\n");
    printd(-123);
    printf("\nReverse:%s ==> ", test);
    reverse(test);
    return 0;
}