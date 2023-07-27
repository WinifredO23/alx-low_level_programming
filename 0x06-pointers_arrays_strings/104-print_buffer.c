#include "main.h"
#include <stdio.h>
/**
 * print_line - Prints a s bytes of a buffer
 * @e: Buffer to print
 * @f: Bytes of buffer to print
 * @g: line of buffer to print
 * Return: void
 */
void print_line(char *e, int f, int g)
{
int i, j;
for (i = 0; i <= 9; i++)
{
if (i <= f)
printf("%02x", e[g * 10 + i]);
else
printf("  ");
if (i % 2)
putchar(' ');
}
for (j = 0; j <= f; j++)
{
if (e[g * 10 + j] > 31 && e[g * 10 + j] < 127)
putchar(e[g * 10 + j]);
else
putchar('.');
}
}
/**
 * print_buffer - Prints a buffer
 * @b: Buffer to print
 * @s: Size of buffer
 * Return: Void
 */
void print_buffer(char *b, int s)
{
int i;
for (i = 0; i <= (s - 1) / 10 && s; i++)
{
printf("%08x: ", i * 10);
if (i < s / 10)
{
print_line(b, 9, i);
}
else
{
print_line(b, s % 10 - 1, i);
}
putchar('\n');
}
if (s == 0)
putchar('\n');
}
