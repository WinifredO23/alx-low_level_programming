#include <stdio.h>
/**
 * main	- Entry point of program
 *
 * Description:	Prints base number in small letters
 * Return: Always 0 (Sucess);
 */
int main(void)
{
	char basenum;

	for (basenum = '0'; basenum <= '9'; basenum++)
	{
		putchar(basenum);
	}
	for (basenum = 'a'; basenum <= 'f'; basenum++)
	{
		putchar(basenum);
	}
	putchar('\n');
	return (0);
}
