#include <stdio.h>
/**
 * main	- Entry point of program
 *
 * Description:	Printing single digits in base ten
 * Return: Always 0 (Sucess);
 */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
