#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers- Prints numbers
 * @separator: String to print
 * @n: Numbers of integers passed
 * @...: var of numbers to be printed
 * Return: Printed value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int b = 0;

	va_start(arg, n);
	while (b < n)
	{
	printf("%d", va_arg(arg, int));
	if (separator != NULL && b < n - 1)
	{
		printf("%s", separator);
	}
	b++;
	}
	va_end(arg);
	printf("\n");
}
