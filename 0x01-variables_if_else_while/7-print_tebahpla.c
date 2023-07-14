#include <stdio.h>
/**
 * main	- Entry point of program
 *
 * Description:	prints alphabets in reverse
 * Return: Always 0 (Sucess);
 */
int main(void)
{
	char Alphabet;

	for (Alphabet = 'z'; Alphabet >= 'a'; Alphabet--)
	{
		putchar(Alphabet);
	}
	putchar('\n');
	return (0);
}
