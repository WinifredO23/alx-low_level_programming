#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: Minimum value
 * @max: Maxmimum value
 * Return: Pointer or NULL
 */
int *array_range(int min, int max)
{
	int num;
	int *array;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	num = max - min + 1;
	array = malloc(num * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < num; j++)
	{
		array[j] = min + j;
	}
	return (array);
}

