#include "lists.h"

/**
* list_len - Print all elements of a list_t list
* @h: Pointer to the head of the list
*
* Return: The number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
