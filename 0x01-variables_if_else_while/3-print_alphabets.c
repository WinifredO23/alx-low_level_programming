#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: print alphabet
 * Return: Always 0 (Sucess);
 */
int main(void)
{
	char Alphabet;

	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
	{
		putchar(Alphabet);
	}
	for (Alphabet = 'A'; Alphabet <= 'Z'; Alphabet++)
	{
		putchar(Alphabet);
	}
	putchar('\n');
	return (0);
}
