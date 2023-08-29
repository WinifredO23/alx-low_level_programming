#include "lists.h"
/**
 * free_listint - frees list.
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	listint_t *c;

	for (; head; head = c)
	{
		c = head->next;
		free(head);
	}
}
