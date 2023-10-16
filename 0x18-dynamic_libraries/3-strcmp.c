#include "main.h"
/**
 * _strcmp - Compares pointers
 * @s1: First pointer to string compared
 * @s2: Second pointer to string compared
 * Return: If statements
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
	if (*s1 == '\0')
	return (0);
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
