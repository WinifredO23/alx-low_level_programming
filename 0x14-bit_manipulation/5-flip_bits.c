#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that were needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	int c = 0;

	for (; d != 0; c++)
	{
		d &= (d - 1);
	}
	return (c);
}
