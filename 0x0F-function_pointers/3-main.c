
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
	int (*operator)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	operator = get_op_func(argv[2]);

	if (!operator)
	{
	printf("Error\n");
	exit(99);
	}

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

