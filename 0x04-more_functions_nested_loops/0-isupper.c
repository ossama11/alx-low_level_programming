#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Check if a character is an uppercase letter
 * @c: The character to check
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

