#include "main.h"
#include <stdio.h>

int is_prime_recursive(int n, int i);

/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The input number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Helper function to check if a number is prime.
 * @n: The input number to be checked.
 * @i: The current divisor to be tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
	if (i * i > n)
	{
	return (1);
	}
	if (n % i == 0)
	{
	return (0);
	}
	return (is_prime_recursive(n, i + 1));
}
