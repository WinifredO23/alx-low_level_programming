#include "main.h"
/**
 * leet - Encode into 1337
 * @f: Input v
 * Return: Str
 */
char *leet(char *f)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "443300771i";
	int i, j;

	for (i = 0; *(str + i); i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if (f[i] == a[j])
	{
	f[i] = b[j];
	}
	}
	}
	return (f);
}
