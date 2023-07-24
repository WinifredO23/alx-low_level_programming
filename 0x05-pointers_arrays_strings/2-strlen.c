#include <stdio.h>
/**
 * _strlen - Returns length of a string
 * @str: String to get length
 * Return: The length of str
 */
int _strlen(char *str)
{
	int length = 0;

	for (; *str != '\0'; str++)
	{
		length++;
	}
	return (length);
}
