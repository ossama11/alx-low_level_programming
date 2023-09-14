#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square of '#' characters.
 * @size: The size of the square.
 */
void print_square(int size)
{
	/* Use tabs for indentation */
	int i;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			putchar('#');
		}

		putchar('\n');
	}
}

