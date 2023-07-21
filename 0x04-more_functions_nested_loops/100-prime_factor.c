#include <stdio.h>
#include <math.h>
/**
 * main - Entry point of the program
 *
 * Description:	prints largest prime factor of given no
 * Return: Alway 0
 */
int main(void)
{
	long a;
	long largest_factor;
	long N = 612852475143;
	double sqr = sqrt(N);

	for (a = 1; a <= sqr; a++)
	{
	if (N % a == 0)
	{
	largest_factor = N / a;
	}
	}
	printf("%ld\n", largest_factor);
	return (0);
}
