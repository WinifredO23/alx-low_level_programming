#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Aloocates memory for an array
 * @nmemb: Number of memebers
 * @size: Size
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int ts;
	char *ptr;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	ts = nmemb * size;
	ptr = malloc(ts);
	if (ptr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < ts; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
