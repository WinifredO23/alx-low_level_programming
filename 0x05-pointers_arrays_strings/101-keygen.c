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
	srand(time(NULL));
	
	int a;
	int p_length = 10;
	char p[p_length + 1];
	const char  set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int set_size = sizeof(set) - 1;

	for (a = 0; a < p_length; a++)
	{
	int random_index = rand() % set_size;
	p[a] = set[random_index];
	}
	p[p_length] = '\0';
	printf("Password: %s\n", p);
	return (0);
}

