
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 if successful, error codes otherwise.
 */
int main(int argc, char *argv[])
{
	 int n1;
	 char *op;
	 int n2;
	 int res;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	if (*op == '+')
		res = op_add(n1, n2);
	else if (*op == '-')
		res = op_sub(n1, n2);
	else if (*op == '*')
		res = op_mul(n1, n2);
	else if (*op == '/')
		res = op_div(n1, n2);
	else if (*op == '%')
		res = op_mod(n1, n2);
	else
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", res);
	return (0);
}

