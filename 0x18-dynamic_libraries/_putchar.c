#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 * @c: the character to print
 * Return: 1 (Sucess);
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
