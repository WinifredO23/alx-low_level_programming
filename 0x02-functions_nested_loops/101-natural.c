#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description:	Prints the sum of all mutiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int N;

	for (N = 0; N < 1024; N++)
	{
	if ((num % 3 == 0) || (num % 5 == 0))
	{
		sum += N;
	}
	}
	printf("%d\n", sum);
	return (0);
}
