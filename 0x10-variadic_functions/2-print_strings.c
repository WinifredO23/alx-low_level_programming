#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- Prints numbers
 * @separator: String to print
 * @n: Numbers of integers passed
 * @...: var of numbers to be printed
 * Return: Printed value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int b = 0;
	char *s;

	va_start(arg, n);
	while (b < n)
	{
	s = va_arg(arg, char *);
	if (s != NULL)
		printf("%s", s);
	else
	{
	printf("(nil)");
	}

	if (separator != NULL && b < n - 1)
	{
		printf("%s", separator);
	}
	b++;
	}
	va_end(arg);
	printf("\n");
}
