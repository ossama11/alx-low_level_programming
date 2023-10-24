#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted, starting at 0.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *temp, *prev;

    if (head == NULL || *head == NULL)
        return -1;

    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return 1;
    }

    prev = *head;
    temp = prev->next;

    for (i = 1; temp != NULL && i < index; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return -1;

    prev->next = temp->next;
    free(temp);

    return 1;
}