#include <stdio.h>
/**
 * main	- Entry point of the program
 *
 * Description:	print alphabet except q and e
 * Return: Always 0 (Sucess);
 */
int main(void)
{
	char Alphabet;

	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
	{
		if (Alphabet != 'q' && Alphabet != 'e')
		{
			putchar(Alphabet);
		}
	}
	putchar('\n');
	return (0);
}
