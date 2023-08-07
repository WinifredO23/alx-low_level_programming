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

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	s = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (s != NULL)
	{
		strcpy(s, s1);
		strcat(s, s2);
	}
	return (s);
}
