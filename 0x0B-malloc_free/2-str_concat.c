#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatentuates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Both strings
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int l1 = 0;
	int l2 = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[l1] != '\0')
	{
	l1++;
	}
	while (s2[l2] != '\0')
	{
	l2++;
	}
	s = (char *)malloc(l1 + l2 + 1);
	if (s != NULL)
	{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	}
	return (s);
}
