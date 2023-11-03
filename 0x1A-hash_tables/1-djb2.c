#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;
	int i;

	hash = 5381;

	for (i = 0;  str[i] != '\0'; i++)
	{
		c = str[i];
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
