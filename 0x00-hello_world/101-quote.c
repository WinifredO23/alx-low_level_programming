#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message exactly in specfied format
 * Return: Always 1
 */
int main(void)
{
char MSG[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, MSG, 59);
return (1);
}
