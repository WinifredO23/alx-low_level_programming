#include "main.h"
/**
 * _strncpy - Copies at most n bytes from src string
 * @dest: Pointer to destination
 * @src: Pointer to source string
 * @n: The number of bytes to be copied
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_p = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
	*dest_p = *src;
	dest_p++;
	src++;
	i++;
	}
	while (i < n)
	{
	*dest_p = '\0';
	dest_p++;
	i++;
	}
	return (dest);
}
