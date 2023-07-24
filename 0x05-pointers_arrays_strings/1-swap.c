#include <stdio.h>
/**
 * swap_int - Swaps values of integers
 * @a:	First interger to be swapped
 * @b:	Second integer to be swapped
 * Return: Null
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
