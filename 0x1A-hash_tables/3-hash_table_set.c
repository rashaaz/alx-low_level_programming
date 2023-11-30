#include "hash_tables.h"

/**
 * m_hash_nd - Creates a hash node with key, value
 * @key: The key to add
 * @value: The value associated
 *
 * Return: A pointer, NULL
 */
hash_node_t *m_hash_nd(const char *key, const char *value)
{
	hash_node_t *n_nd;

	n_nd = malloc(sizeof(hash_node_t));
	if (n_nd == NULL)
		return (NULL);
	n_nd->key = strdup(key);
	if (n_nd->key == NULL)
	{
		free(n_nd);
		return (NULL);
	}
	n_nd->value = strdup(value);
	if (n_nd->value == NULL)
	{
		free(n_nd->key);
		free(n_nd);
		return (NULL);
	}
	n_nd->next = NULL;

	return (n_nd);
}
/**
 * hash_table_set - Adds an element
 * @ht: The hash table to add
 * @key: The key to add
 * @value: The value associated
 *
 * Return: 1, 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *hs_nd, *tp;
	char *n_va;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[ind];
	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
		{
			n_va = strdup(value);
			if (n_va == NULL)
				return (0);
			free(tp->value);
			tp->value = n_va;
			return (1);
		}
		tp = tp->next;
	}
	hs_nd = m_hash_nd(key, value);
	if (hs_nd == NULL)
		return (0);
	hs_nd->next = ht->array[ind];
	ht->array[ind] = hs_nd;
	return (1);
}
