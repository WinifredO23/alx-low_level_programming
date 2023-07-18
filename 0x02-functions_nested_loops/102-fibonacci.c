#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:	Prints the firs 52 fibonacci num
 * Return: Null
 */
int main(void)
{
	int f = 0;
	long j = 1;
	long h = 2;

	while (f < 50)
	{
	if (f == 0)
	{
		printf("%ld", j);
	}
	else if (f == 1)
	{
		printf(", %ld", h);
	}
	else
	{
		h += j;
		j = h - j;
		printf(", %ld", h);
	}
	++f;
	}
	printf("\n");
	return (0);
}
