#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated
 * @ht: The hash table
 * @key: The key
 *
 * Return: 1, 0.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *tp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[ind];
	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
			return (tp->value);
		tp = tp->next;
	}
	return (NULL);
}
