#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list tot traverse
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
