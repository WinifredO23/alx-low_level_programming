#include <stdio.h>
/**
 * main - Entry Point of program
 *
 * Description:	Prints the sum of fibnacci no
 * Return: Alway 0
 */
int main(void)
{
	int f = 0;
	long j = 1;
	long h = 2;
	long sum = h;

	while (h + j < 4000000)
	{
	h += j;
	if (h % 2 == 0)
	sum += h;
	j = h - j;
	++f;
	}
	printf("%ld\n", sum);
	return (0);
}
