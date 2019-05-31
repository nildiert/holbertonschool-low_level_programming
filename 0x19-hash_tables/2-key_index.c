#include "hash_tables.h"

/**
 * key_index - hash djb2 algoritm.
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	hash_code = hash_djb2(key);
	return (hash_code % size);
}
