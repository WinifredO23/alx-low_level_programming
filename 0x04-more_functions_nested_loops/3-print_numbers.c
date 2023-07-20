#include "main.h"
/**
 * print_numbers - Print numbers zero to nine
 * Return: The range of numbers 0 to 9
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
