#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of program
 * Description:	Prints number of args
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
