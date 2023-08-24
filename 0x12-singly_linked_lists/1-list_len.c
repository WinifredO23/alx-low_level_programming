#include "lists.h"
/**
 * list_len - Prints Number of elements in list
 * @h: - Head of list
 * Description:  Returns the number of elements in a linked list_t list.
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
	h = h->next;
	}
	return (i);
}
