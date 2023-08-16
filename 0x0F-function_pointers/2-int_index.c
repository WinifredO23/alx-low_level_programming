#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: Array of integers
 * @size: Number of elements in array
 * @cmp: Function pointer to cmp
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array != NULL && cmp != NULL && size > 0)
	{
	for (b = 0; b < size; b++)
	{
	if (cmp(array[b]) != 0)
	{
		return (b);
	}
	}
	}
	return (-1);
}
