#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * function print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * */
void print_alphabet_x10(void)
{
	char c;
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			c = (char)i;
			_putchar(c);
		}
		_putchar('\n');
	}
}

