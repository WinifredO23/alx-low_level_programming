#include "main.h"
#include <stdio.h>
int _sqrt(int b, int c);
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @b: The number for which the natural square root is to be calculated.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int b)
{
	return (_sqrt(b, 1));
}
/**
 * _sqrt - Calculates natural square root
 * @b:	Number for cal of square root
 * @c:	Number for iteration
 *
 * Return: The natural square root
 */
int _sqrt(int b, int c)
{
	int sqrt = c * c;

	if (sqrt > b)
	return (-1);

	if (sqrt == b)
	return (c);

	return (_sqrt(b, c + 1));
}
