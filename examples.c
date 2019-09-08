//
// Created by nmaynes on 9/8/19.
//

#include <stdio.h>
#include <string.h>

/* printd: print n in decimal
 * PRECONDITION: Argument is type int
 * POSTCONDITION: Argument is printed as a decimal
 * */

void printd(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        printd(n / 10);
    putchar(n % 10 + '0');
}

/*
 * Reverse a string in place. Page 62 of "The C Programming Language"
 * PRECONDITION: Function takes a character array
 * POSTCONDITION: Function returns the same character array, reversed
 */
void reverse(char s[])
{
    int i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    printf("%s\n", s);
}