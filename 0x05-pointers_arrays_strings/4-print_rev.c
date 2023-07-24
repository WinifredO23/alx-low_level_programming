#include "main.h"
/**
 * print_rev- Prints reverse of the etring
 * @s:	String to print
 * Return: Void
 */
void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	;
	for (i -= 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
