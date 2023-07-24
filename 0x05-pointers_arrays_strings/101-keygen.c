#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: Generates random passwords
 * Return: Always 0 (Success);
 */
int main(void)
{
	int s;
	int a;

	srand(time(NULL));
	
	for (s = 0; s <= 2645; s += a)
	{
		a = rand() % 128
		putchar(a);
	}
	putchar(2772 - s)
	return (0);
}
