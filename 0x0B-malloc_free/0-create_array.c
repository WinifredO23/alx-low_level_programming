#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates arrays
 * @size: Size of array
 * @c: char to be filled
 * Return: array filed or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
	{
	return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));

	if (arr == 0)
	{
	return (NULL);
	}
	for (j = 0; j < size; j++)
	{
	arr[j] = c;
	}
	return (arr);
}

