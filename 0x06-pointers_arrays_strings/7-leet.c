#include "main.h"
/**
 * leet - Replaces letters with num
 * @str: String of letters to replace
 * Return: Str
 */
char *leet(char *str)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "443300771i";
	int i = 0;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (str[i] == a[j])
	{
	str[i] = b[j];
	}
	}
	}
	return (str);
}
