#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main	- Entry point of the program
 *
 * Description:	Random number last digit
 * Return: Always 0;
 */
int main(void)
{
	int n;
	int lastdg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	lastdg = n % 10;
	if (lastdg > 5)
	{
		printf(" %d and is greater than 5\n", lastdg);
	}
	else if (lastdg == 0)
	{
		printf(" %d and is 0\n", lastdg);
	}
	else
	{
		printf(" %d and is less than 6 not 0\n", lastdg);
	}
	return (0);
}
