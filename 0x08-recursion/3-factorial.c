#include "main.h"

/**
* factorial - Returns the factorial of a number.
* @n: The number.
*
* Return: Factorial of the number, or -1 if there's an error.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
