#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message exactly
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 51);
	return (1);
}
