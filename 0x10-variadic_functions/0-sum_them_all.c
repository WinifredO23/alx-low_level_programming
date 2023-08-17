#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns sum of all parameters
 * @n: Number of parameters
 * @...: Var numbers of parameters to calculate sum
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int s = 0;
	unsigned int a = 0;

	if (n == 0)
	{
	return (0);
	}

	va_start(arg, n);

	while (a < n)
	{
	s += va_arg(arg, int);
	a++;
	}
	va_end(arg);
	return (s);
}
