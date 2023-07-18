#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n:	The number whose last digit is printed
 *
 * Return: The value of lastdigit
 */
int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);
}
