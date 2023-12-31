#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer in an array
* @array: pointer to the array
* @size: number of elements in the array
* @cmp: pointer to the function used for comparison
*
* Return: index of the first element.
* -1 if no element matches or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
