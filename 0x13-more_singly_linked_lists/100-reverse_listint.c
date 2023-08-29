#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the list.
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *c = *head;
	listint_t *n;

	for (; c != NULL;)
	{
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}

	*head = p;

	return (*head);
}

