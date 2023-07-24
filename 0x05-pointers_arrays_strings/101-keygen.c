#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description:	Generates random passwords
 * Return: Always 0 (Sucess);
 */
int main(void)
{
	int p_length = 10;
	int a;
	char *p = (char *)malloc((p_length + 1) * sizeof(char));
	const char  set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int set_size = sizeof(set) - 1;

	srand(time(NULL));

	for (a = 0; a < p_length; a++)
	{
	int random_index = rand() % set_size;
	p[a] = set[random_index];
	}
	p[p_length] = '\0';
	printf("Password: %s\n", p);
	free(p);
	return (0);
}

