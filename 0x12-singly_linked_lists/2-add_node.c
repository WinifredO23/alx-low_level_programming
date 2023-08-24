#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t.
 * @head: the first node.
 * @str: New dtring to add in node.
 * Return: address of new string.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
