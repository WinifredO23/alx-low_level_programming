#include "main.h"
/**
 * _atoi- Convert a string to an integer
 * @s:	The pointer to convert
 * Return: A integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int ai = 0;
	int c = 1;
	int f = 0;

	while (s[a])
	{
	if (s[a] == 45)
	{
	c *= -1;
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
	f = 1;
	ai = (ai * 10) + (s[a] - '0');
	a++;
	}
	if (f == 1)
	{
	break;
	}
	a++;
	}
	ai *= c;
	return (ai);
}
