#include "main.h"

/**
* _calloc - allocates memory for an array.
* @num_items: number of elements.
* @item_size: size of bytes.
*
* Return: pointer to the allocated memory.
* if num_items or item_size is 0, returns NULL.
* if malloc fails, returns NULL.
*/

void *_calloc(unsigned int num_items, unsigned int item_size)
{
	char *pt;

	unsigned int i;

	if (num_items == 0 || item_size == 0)
		return (NULL);

	pt = malloc(num_items * item_size);

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < (num_items * item_size); i++)
		pt[i] = 0;

	return (pt);
}
