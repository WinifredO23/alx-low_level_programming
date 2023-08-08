#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Converts parameters to a string
 * @ac: Argument count
 * @av: Argument vector
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int length = 0;
	char *res;
	int a, b, c;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
	if (av[a] != NULL)
	{
	for (b = 0; av[a][b] != '\0'; b++)
	{
	length++;
	}
	length++;
	}
	}
	res = (char *)malloc(length + 1);
	if (res != NULL)
	{
	c = 0;
	for (a = 0; a < ac; a++)
	{
	if (av[a] != NULL)
	{
	for (b = 0; av[a][b] != '\0'; b++)
	{
	res[c] = av[a][b];
	c++;
	}
	res[c] = '\n';
	c++;
	}
	}
	res[c] = '\0';
	}
	return (res);
}


