#include "lists.h"
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c, *t;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		t = *head;
		*head = t->next;
		free(t);
		return (1);
	}

	c = *head;
	for (count = 0; c != NULL && count < index - 1; count++)
	{
		c = c->next;
	}

	if (c == NULL || c->next == NULL)
		return (-1);

	t = c->next;
	c->next = t->next;
	free(t);

	return (1);
}

