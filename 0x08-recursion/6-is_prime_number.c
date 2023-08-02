#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The input number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int j;

	if (n <= 1)
	{
	return (0);
	}
	for (j = 2; j * j <= n; j++)
	{
	if (n % j == 0)
	{
	return (0);
	}
	}
	return (1);
}
