#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:	Printd the name of source file it is compiled from
 * Return: Always 0 (Sucesss)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
