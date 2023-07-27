#include "main.h"
/**
 * reverse_array - Reverts the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;

	while (s < e)
	{
	int t = a[s];

	a[s] = a[e];
	a[e] = t;
	s++;
	e--;
	}
}
