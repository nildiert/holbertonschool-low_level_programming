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
/*		int i = 0;*/
	unsigned long int index;
	hash_node_t *copy_node = NULL, *new_node = NULL;

	if (ht && (key && strcmp(key, "") != 0))
	{
		index = key_index((unsigned char *)key, ht->size);
		if (ht->array[index] != NULL)
		{
			copy_node = ht->array[index];
			while (copy_node)
			{
				if (!strcmp(key, copy_node->key))
				{
					free(copy_node->value);
					copy_node->value = strdup(value);
					if (!copy_node->value)
						return (0);
					return (1);
				}
				copy_node = copy_node->next;
			}
			new_node = create_node((char *)key, (char *)value);
			if (!new_node)
				return (0);
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		else
		{
			ht->array[index] = create_node((char *)key, (char *)value);
			if (!(ht->array[index]))
				return (0);
		}
		return (1);
	}
	return (0);
}
/**
 * create_node - hash djb2 algoritm.
 * @key: key
 * @value: size of the array of the hash table
 *
 * Return: Always EXIT_SUCCESS.
 */

hash_node_t *create_node(char *key, char *value)
{

	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);

}
