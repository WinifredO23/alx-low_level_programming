#include <stdio.h>
/**
 * main	- Entry point of program
 *
 * Description:	Prints all single digits
 * Return: Always 0 (Sucess);
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
