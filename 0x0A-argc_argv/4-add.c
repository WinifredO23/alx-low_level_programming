#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point of program
 * Description:	Adds numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always (0);
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int temp;
	int i = 1;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	while (i < argc)
	{
	char *arg = argv[i];
	int j = 0;

	while (arg[j] != '\0')
	{
		if (!isdigit(arg[j]))
		{
		printf("Error\n");
		return (1);
		}
		j++;
	}

	temp = atoi(arg);
	sum += temp;
	i++;
	}
	printf("%d\n", sum);
	return (0);
}

