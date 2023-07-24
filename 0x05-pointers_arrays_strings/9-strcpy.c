#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
	dest[a++] = '\0';
	return (dest);
}
