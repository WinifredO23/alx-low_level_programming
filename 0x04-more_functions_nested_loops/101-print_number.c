#include "main.h"
#include <stdio.h>
/**
 * print_number -Prints integer
 * @n:	The integer
 * Return: 0
 */
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
	n *= -1;
	i = n;
	_putchar('_');
	}
	i /= 10;
	if (i != 0)
	print_number(i);
	_putchar((int) n % 10 + '0');
}
