#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message exactly in specfied format
 * Return: Always 1
 */
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

write(2, message, 59);
return (1);
}
