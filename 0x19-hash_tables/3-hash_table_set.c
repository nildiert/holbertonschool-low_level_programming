#include "hash_tables.h"

/**
 * hash_table_set - hash djb2 algoritm.
 * @ht: hash table you want to add or update the key
 * @key: key
 * @value: size of the array of the hash table
 *
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht)
	{
/*		int i = 0;*/
		unsigned long int index;
		hash_node_t *new_node = NULL;
		char *val_copy;
		char *key_copy;

		new_node = malloc(sizeof(hash_node_t));
		(void)index;
		val_copy = strdup(value);
		key_copy = strdup(key);
		if (!*val_copy || !*key_copy || !key)
			return (0);
		index = key_index((unsigned char *)key, ht->size);
		new_node->key = key_copy;
		new_node->value = val_copy;
		new_node->next = NULL;
		if (ht->array[index] == NULL)
			ht->array[index] = new_node;
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		return (1);
	}
	return (0);
}
