#include "main.h"
#include <limits.h>

int print_last_digit(int n) {
    int last_digit;

    if (n == INT_MIN) {
        last_digit = 8;
    } else {
        if (n < 0) {
            n = -n;
        }

        last_digit = n % 10;
    }

    _putchar('0' + last_digit);

    return last_digit;
}

