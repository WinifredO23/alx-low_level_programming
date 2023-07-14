#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main	- Entry point of program
 *
 * Description:	Random number assigned in specfic range
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int min = -100;
	int max = 100;
	int n;

	n = (rand() % (max - min + 1)) + min;
	srand(time(0));
	printf("%d is",	 n);
	if (n > 0)
	{
		printf("postive\n");
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("negative\n");
	}
	return (0);
}
