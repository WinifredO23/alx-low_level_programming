#include <stdio.h>
/**
 * main	- Entry point of program
 *
 * Description:	Prints all possible combinations
 * Return: Always 0 (Sucess);
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
