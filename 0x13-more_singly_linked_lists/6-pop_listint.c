#include "lists.h"
/**
 *  pop_listint - deletes the head node of a listint_t linked list
 *  @head: pointer to first element
 *  Return: N
 */
int pop_listint(listint_t **head)
{
	listint_t *c;
	int d;

	if (head == NULL || *head == NULL)
	return (0);

	d = (*head)->n;
	c = *head;
	*head = (*head)->next;

	free(c);
	return (d);
}
