#include "hash_tables.h"

/**
 * hash_table_print - hash djb2 algoritm.
 * @ht: hash table you want to add or update the key
 *
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *copy;
	int counter = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array != NULL)
			{
				copy = ht->array[i];
				while (copy)
				{
					if (counter)
						printf(", ");
					printf("'%s': '%s'", copy->key, copy->value);
					counter++;
					copy = copy->next;
				}
			}
		}
		printf("}\n");
	}
}
