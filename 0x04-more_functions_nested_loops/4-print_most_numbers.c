#include "main.h"
/**
 *  print_most_numbers - Print numbers
 *
 *  Description: Print numbers except 2 and 4
 *  Return: numbers range from 0 to 9
 */
void print_most_numbers(void)
{
	int N;

	for (N = '0'; N <= '9'; N++)
	{
	if (N != '2' && N != '4')
	{
	_putchar(N);
	}
	}
	_putchar('\n');
}
