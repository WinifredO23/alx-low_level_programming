#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Print integer
 * @n:	The integer to be printed
 * Return: 0
 */
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
	n *= -1;
	i = n;
	_putchar('-');
	}
	i /= 10;
	if (i != 0)
	print_number(i);
	_putchar((int) n % 10 + '0');
}
