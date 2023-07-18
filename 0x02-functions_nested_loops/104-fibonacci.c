#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:	Prints the first 98 f no
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %lu", c);

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
