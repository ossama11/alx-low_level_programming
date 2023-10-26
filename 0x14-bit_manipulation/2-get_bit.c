#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to retrieve the bit from.
* @index: The index of the bit to get.
*
* Return: The value of the bit at the specified index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	mask = 1UL << index;
	int bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
