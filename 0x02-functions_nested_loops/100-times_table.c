#include "main.h"
#include "stdio.h"
/**
 * print_times_table - Prints times table of given input
 * @n:	The value of times table printed
 */
void print_times_table(int n)
{
	int a, b, res;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; n++)
		{
			_putchar(',');
			_putchar(' ');
			res = a * b;
			if (res <= 99)
				_putchar(' ');
			if (res <= 9)
				_putchar(' ');
			if (res >= 100)
			{
				_putchar((res / 100) + '0');
				_putchar((res / 100) % 10 + '0');
			}
			else if (res <= 99 && res >= 10)
			{
				_putchar((res / 10) + '0');
			}
			_putchar(res % 10 + '0');
		}
		_putchar('\n');
	}
	}
}
