#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_num - Checks if a string consists of only numeric characters.
 * @str: The input string to check.
 * Return: 1 if the string consists of numeric characters, 0 otherwise.
 */
int is_num(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
	if (str[a] < '0' || str[a] > '9')
	{
		return (0);
	}
	}
	return (1);
}
/**
 * print_number - Prints an integer as a sequence of characters.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 if successful, 98 if there's an error in command-line arguments.
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int res;

	if (argc != 3 || !is_num(argv[1]) || !is_num(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	print_number(res);
	_putchar('\n');
	return (0);
}



