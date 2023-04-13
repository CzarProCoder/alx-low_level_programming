#include "hash_tables.h"

/**
 * key_index - function to give index of a key
 * @key: Key to be checked
 * @size: Size of the hash_table
 * Return: returns the index of the key provided
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
