#include "main.h"
/**
 * leet - Encode into 1337
 * @str: Input v
 * Return: Str
 */
char *leet(char *str)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "443300771i";
	int i;
	int j;

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
