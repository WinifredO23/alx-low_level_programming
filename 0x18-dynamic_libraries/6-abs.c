#include "main.h"
/**
 * _abs - Computes the absolute value of an interger
 * @c:	The interger which absolute value is computed
 *
 * Return: Absolute value of c
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value = c * -1;

		return (abs_value);
	}
	else
	{
		return (c);
	}
}
