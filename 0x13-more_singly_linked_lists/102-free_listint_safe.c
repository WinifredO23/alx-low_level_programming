#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t s = 0;
	listint_t *c;
	int b;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
		c = (*h)->next;
		free(*h);
		*h = c;
		s++;
		}
		else
		{
		free(*h);
		*h = NULL;
		s++;
		break;
		}
	}
	*h = NULL;
	return (s);
}
