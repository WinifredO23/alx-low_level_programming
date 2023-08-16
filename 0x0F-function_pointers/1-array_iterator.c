#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes function on each element
 * @array: Array of integers
 * @size: Size of array
 * @action: A function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL && size > 0)
	{
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
	}
}
