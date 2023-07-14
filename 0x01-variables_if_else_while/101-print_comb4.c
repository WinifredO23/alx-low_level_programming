#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: Print combo three
 * Return: Always o (Sucess);
 */
int main(void)
{
	int e, f, g;

	for (e = '0'; e <= '7'; e++)
	{
	for (f = e + 1; f <= '8'; f++)
	{
	for (g = f + 1; g <= '9'; g++)
	{
	if ((f != e) != g)
	{
	putchar(e);
	putchar(f);
	putchar(g);

	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
