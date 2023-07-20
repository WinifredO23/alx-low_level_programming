#include "main.h"
/**
 * print_square - prints square in terminal
 * @size: Number of squares
 * Return: 0
 */
void print_square(int size)
{
	int e, f;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (e = 0; e < size; e++)
	{
	for (f = 0; f < size; f++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
