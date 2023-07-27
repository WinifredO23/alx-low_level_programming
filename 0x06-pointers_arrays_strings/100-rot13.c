#include "main.h"
/**
 * rot13 - Encodes a string
 * @str: String to be encoded
 * Return: S
 */
char *rot13(char *str)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; a[j] != '\0'; j++)
	{
	if (str[i] == a[j])
	{
	str[i] = b[j];
	break;
	}
	}
	}
	return (str);
}
