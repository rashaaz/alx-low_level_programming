#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ii;
	hash_node_t *prv;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (ii = 0; ii < ht->size; ii++)
	{
		while (ht->array[ii] != NULL)
		{
			prv = ht->array[ii]->next;
			free(ht->array[ii]->key);
			free(ht->array[ii]->value);
			free(ht->array[ii]);
			ht->array[ii] = prv;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
