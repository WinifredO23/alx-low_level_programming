#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve (starting from 0).
 * Return: Pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c = head;
	unsigned int count;

	for (count = 0; c != NULL; count++)
	{
	if (count == index)
	{
	return (c);
	}
	c = c->next;
	}
	return (NULL);
}
