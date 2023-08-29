#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: pointer to list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL)
		return;

	for (; *head; *head = c)
	{
		c = (*head)->next;
		free(*head);

	}
	*head = NULL;
}
