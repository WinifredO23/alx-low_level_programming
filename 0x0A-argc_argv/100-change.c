#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of program
 * Description:	Prints the min num of coins to make change
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int cent;
	int coins[] = {25, 10, 5, 2, 1};
	int nc = 0;
	int i = 0;	

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
	printf("0\n");
	return (0);
	}

	while (cent > 0)
	{
		if (cent >= coins[i])
		{
			nc += cent / coins[i];
			cent %= coins[i];
		}
		i++;
	}
	printf("%d\n", nc);
	return (0);
}
