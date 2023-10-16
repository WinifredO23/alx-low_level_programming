#include "main.h"
/**
 * _strncat - Concaternates two trings
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The number of src to append to dest
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_p = dest;

	while (*dest_p != '\0')
	{
	dest_p++;
	}
	while (n > 0 && *src != '\0')
	{
	*dest_p = *src;
	dest_p++;
	src++;
	n--;
	}
	*dest_p = '\0';
	return (dest);
}
