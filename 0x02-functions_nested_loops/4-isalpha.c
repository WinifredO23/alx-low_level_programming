#include "main.h"
/**
 * _isalpha - Checks for lowercase Character
 * @c: Character to be checked
 *
 * Return: 1 if c is lowercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
