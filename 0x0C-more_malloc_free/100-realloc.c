#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - allocates memory
 * @ptr: Pointer to previously allocated memory
 * @old_size: Old size
 * @new_size: New size
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;
	unsigned int k;

	if (ptr == NULL)
	{
	return (malloc(new_size));
	}
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	if (new_size == old_size)
	{
	return (ptr);
	}

	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
	{
	return (NULL);
	}
	if (new_size > old_size)
	{
	for (k = 0; k < old_size; k++)
	{
	((char *)n_ptr)[k] = ((char *)ptr)[k];
	}
	for (k = 0; k < new_size; k++)
	{
	((char *)n_ptr)[k] = ((char *)ptr)[k];
	}
	}
	free(ptr);
	return (n_ptr);
}
