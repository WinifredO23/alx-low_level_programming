#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list
 * @head: first node
 * @str: string to put new address
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *e = *head;
	unsigned int len;

	for (len = 0; str[len]; len++)
		;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
	return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	for (; e->next;)
	{
	e = e->next;
	}
	e->next = new_node;
	return (new_node);
}
