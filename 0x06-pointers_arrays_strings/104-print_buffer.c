#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to print.
 * @s: The number of bytes to print from the buffer.
 *
 * Return: No return value (void).
 */
void print_buffer(char *b, int s)
{
	int i, j;

	for (i = 0; i < s; i += 10)
	{
	printf("%08x: ", i);
	for (j = 0; j < 10; j++)
	{
	if (i + j < s)
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
	for (j = 0; j < 10 && i + j < s; j++)
	{
	printf("%c", isprint((unsigned char)b[i + j]) ? b[i + j] : '.');
	}
	printf("\n");
	}
}
