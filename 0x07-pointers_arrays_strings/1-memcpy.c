#include "main.h"
/**
 * _memcpy - Copies n bytes.
 * @dest: Pointer to the destination.
 * @src: Pointer to source.
 * @n: Number of bytes to copy.
 *
 * Return: @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
