#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing binary digits.
 * Return: The converted unsigned int, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c;

	if (b == NULL)
		return (0);

	c = 0;
	for (; *b != '\0'; b++)
	{
	if (*b != '0' && *b != '1')
		return (0);
	c = c * 2 + (*b - '0');
	}

	return (c);
}
