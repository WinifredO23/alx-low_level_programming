#include "main.h"
/**
 * print_alphabet - alphabet is in Lc
 *
 * Description:	prints in lowercase
 * Return: Void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
