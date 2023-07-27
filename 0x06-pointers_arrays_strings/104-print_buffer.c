#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to print.
 * @size: The number of bytes to print from the buffer.
 * Return: No return value (void).
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	for (i = 0; i < size; i += 10)
	{
	printf("%08x: ", i);
	for (j = 0; j < 10; j++)
	{
	if (i + j < size)
	{
	printf("%02x", (unsigned char)b[i + j]);
	if (j % 2 != 0)
	printf(" ");
	}
	else
	{
	printf("  ");
	if (j % 2 != 0)
	printf(" ");
	}
	}
	printf(" ");

	for (j = 0; j < 10; j++)
	{
	if (i + j < size)
	{
	if (isprint((unsigned char)b[i + j]))
	printf("%c", b[i + j]);
	else
	printf(".");
	}
	else
	{
	printf(" ");
	}
	}
	printf("\n");
	}
}
