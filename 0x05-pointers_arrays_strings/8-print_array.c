#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements in given array
 * @a:	Array if integers
 * @n:	Number of elements on the array to be printed
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
