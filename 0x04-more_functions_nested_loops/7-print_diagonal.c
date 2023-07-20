#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in terminal
 * @n:	Number of time to print diagonal line
 * Return: Result
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
	for (d = 0; d < c; d++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
