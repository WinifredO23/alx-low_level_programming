#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes;
	unsigned char *address;
	int a;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
	printf("Error\n");
	return (2);
	}
	address = (unsigned char *)&main;

	for (a = 0; a < bytes; a++)
	{
	printf("%02x", address[a]);
	if (a < bytes - 1)
	printf(" ");
	}
	printf("\n");
	return (0);
}
