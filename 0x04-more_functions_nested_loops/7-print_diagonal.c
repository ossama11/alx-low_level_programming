#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Prints a diagonal line using the '\' character.
 * @n: The number of times the character should be printed.
 */
void print_diagonal(int n)
{
	int i;
	char e = ' ';

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
			putchar(e);
		putchar('\\');
		putchar('\n');
	}
}
