#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Print the last digit of an integer.
 * @n: The integer to extract the last digit from.
 *
 * Return: The last digit of the integer.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
		}
		last_digit = n % 10;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}

