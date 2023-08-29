#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data.
 * @head: Pointer to the head of the list.
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int s;
	listint_t *c = head;

	for (s = 0; c != NULL; c = c->next)
	{
	s += c->n;
	}
	return (s);
}

