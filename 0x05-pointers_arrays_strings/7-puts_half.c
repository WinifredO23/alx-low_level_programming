#include "main.h"
/**
 * puts_half - Prints half
 * @str: The string to print
 * Return: Void
 */
void puts_half(char *str)
{
	int c = 0;
	int n = (c - 1) / 2;

	for (c = 0; str[c] != '\0'; c++)
	;
	if (c % 2 == 1)
	{
	n += 1;
	}
	else
	{
	n = c / 2;
	}

	for (; n < c; n++)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
}
