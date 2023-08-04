#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of program
 * Description:	Prints all arguments recived
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
