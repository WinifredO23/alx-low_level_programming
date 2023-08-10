#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: First string
 * @s2: Second String
 * @n: Number of bytes to concatenate
 * Return: Pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c;
	unsigned int d;
	char *e;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (n >= b)
		n = b;
	c = a + n + 1;

	e = (char *)malloc(c);
	if (e == NULL)
	{
		return (NULL);
	}

	for (d = 0; d < a; d++)
		e[d] = s1[d];

	for (d = 0; d < n; d++)
	{
		e[a + d] = s2[d];
	}
	e[a + n] = '\0';
	return (e);
}


