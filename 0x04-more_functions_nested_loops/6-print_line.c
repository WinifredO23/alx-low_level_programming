#include "main.h"
/**
 * print_line - Prints striaght line in terminal
 * @n:	number of lines
 * Return: 0
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
