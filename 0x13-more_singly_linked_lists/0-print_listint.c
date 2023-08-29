#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: list to print.
 * Return: Number of elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
