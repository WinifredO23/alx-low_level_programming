#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints values of various data types.
 * @format: The format string specifying the types of arguments.
 * @...: The list of arguments based on the format string.
 * Description: This function prints values based on the given format string.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float flo;
	char *str;
	int f = 0;

	va_start(args, format);
	while (format && format[f])
	{
	switch (format[f])
	{
	case 'c':
		c = va_arg(args, int);
		printf("%c", c);
	if (format[f + 1])
		printf(", ");
	break;
	case 'i':
		i = va_arg(args, int);
		printf("%d", i);
	if (format[f + 1])
		printf(", ");
	break;
	case 'f':
		flo = va_arg(args, double);
		printf("%f", flo);
	if (format[f + 1])
		printf(", ");
	break;
	case 's':
		str = va_arg(args, char *);
	if (str != NULL)
		printf("%s", str);
	break;
	}
	f++;
	}
	va_end(args);
	printf("\n");
}

