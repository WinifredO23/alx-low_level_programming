#include "main.h"
/**
 * rev_string - Reverses a string
 * @s:	The string tp be modifies
 * Return: Void
 */
void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char temp;

	for (; s[i++] != '\0'; l++)
	;
	for (i = l - 1; i >= l / 2; i--)
	{
	temp = s[i];
	s[i] = s[l - i - 1];
	s[l - i - 1] = temp;
	}
}
