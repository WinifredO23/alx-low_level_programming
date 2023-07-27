#include "main.h"
/**
 * string_toupper - Converts to uppercse
 * @str: The string to be converted
 * Return: Str
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
	if (*p >= 'a' && *p <= 'z')
	{
	*p = *p - 32;
	}
	p++;
	}
	return (str);
}
