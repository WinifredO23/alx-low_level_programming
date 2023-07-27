#include "main.h"
/**
 * leet - Encodes a string in 1337
 * @str: String to be encoded
 * Return: The resulting string;
 */
char *leet(char *str)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

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
