#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicate string
 * @str: String to be duplicated
 * Return: Duplicate string or NULL
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *dupe;

	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 1; str[i]; i++)
	dupe = malloc((sizeof(char) * i) + 1);
	if (dupe == NULL)
	{
	return (NULL);
	}

	for (j = 0; j < i; j++)
	{
	dupe[j] = str[j];
	}
	dupe[j] = '\0';
	return (dupe);
}
