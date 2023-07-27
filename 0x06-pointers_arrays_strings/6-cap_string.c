#include "main.h"
#include <ctype.h>
/**
 * cap_string - Captilaizieswords of a given string
 * @str: The string in question
 * Return: Str
 */
char *cap_string(char *str)
{
	char *p = str;
	int cp_next = 1;

	while (*p != '\0')
	{
	if (cp_next && islower(*p))
	{
	*p = toupper(*p);
	}
	cp_next = 0;
	switch (*p)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
	cp_next = 1;
	break;
	}
	p++;
	}
	return (str);
}
