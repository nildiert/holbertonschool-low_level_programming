#include "hash_tables.h"

/**
 * hash_table_set - hash djb2 algoritm.
 * @ht: hash table you want to add or update the key
 * @key: key
 * @value: size of the array of the hash table
 *
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht != NULL)
	{
/*		int i = 0;*/
		unsigned long int index;
		hash_node_t *copy = NULL;

		index = key_index((unsigned char *)key, ht->size);
		copy = ht->array[index];
		while (copy)
		{
			if (strcmp(copy->key, key) == 0)
			{
				return (copy->value);
			}
			copy = copy->next;
		}
	}
	return (NULL);
}
