#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @start: minimum value.
* @end: maximum value.
*
* Return: pointer to the newly created array.
* if end > start, returns NULL.
* if malloc fails, returns NULL.
*/

int *array_range(int start, int end)
{
	int *arr;

	int i;

	if (start > end)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((end - start) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; start <= end; i++, start++)
		arr[i] = start;

	return (arr);
}
