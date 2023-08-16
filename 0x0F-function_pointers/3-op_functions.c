#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Adds integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Divides integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
