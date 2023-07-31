#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to locate in the string.
 *
 * Return: Null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
	if (s[i] == c)
	return (&s[i]);
		i++;
	}
	return (NULL);
}
