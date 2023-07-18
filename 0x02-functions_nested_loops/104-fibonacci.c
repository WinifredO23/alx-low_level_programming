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

	printf("%lu", a);

	for (i = 1; i < 98; i++)
	{
		printf(", %lu", b);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
