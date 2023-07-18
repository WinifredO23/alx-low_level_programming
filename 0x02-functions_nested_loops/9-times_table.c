#include "main.h"
/**
 * times_table - Prints the 9 times table starting from 0
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
		int res = a * b;

		if (b == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			if (res < 10)
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
	}
	_putchar('\n');
	}
}

