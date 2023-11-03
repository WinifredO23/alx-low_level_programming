#include "hash_tables.h"
/**
 * key_index - Get the index for a key in a hash table array
 * @key: The key to find the index for
 * @size: The size of the array in the hash table
 * Description:
 * This function calculates the index at which a key/value pair should be
 * stored in the array of a hash table using the djb2 hash algorithm.
 * Return: The index in the hash table array where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_v = hash_djb2(key);
	unsigned long int i = hash_v % size;

	return (i);
}
