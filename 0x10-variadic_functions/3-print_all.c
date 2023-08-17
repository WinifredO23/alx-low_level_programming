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
	char *c, *str = "";
	int f = 0;

	va_start(args, format);
	if (format)
	{
	while (format[f])
	{
	switch (format[f])
	{
	case 'c':
		printf("%s%c", str, va_arg(args, int));
	break;
	case 'i':
		printf("%s%d", str, va_arg(args, int));
	break;
	case 'f':
		printf("%s%f", str, va_arg(args, double));
	break;
	case 's':
		c = va_arg(args, char *);
	if (!c)
		c = "(nil)";
	printf("%s%s", str, c);

	break;
	default:
	f++;
	continue;
	}
	str = ", ";
	f++;
	}
	}
	va_end(args);
	printf("\n");
}

