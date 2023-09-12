#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 */
void print_alphabet(void) {
    char c;
    int i;
    for (i = 97; i <= 122; i++) {
        c = (char)i;
        _putchar(c);
    }
    _putchar('\n');
}
