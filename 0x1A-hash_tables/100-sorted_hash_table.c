#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size
 *
 * Return: A pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htt;
	unsigned long int ii;

	htt = malloc(sizeof(shash_table_t));
	if (htt == NULL)
		return (NULL);
	htt->size = size;
	htt->shead = NULL;
	htt->stail = NULL;
	htt->array = malloc(sizeof(shash_node_t) * size);
	if (htt->array == NULL)
	{
		free(htt);
		return (NULL);
	}

	for (ii = 0; ii < size; ii++)
	{
		htt->array[ii] = NULL;
	}
	return (htt);
}

/**
 * m_sh_nd - Creates a sorted hash node key, value
 * @key: The key to add
 * @value: The value associated
 *
 * Return: A pointer, NULL
 */
shash_node_t *m_sh_nd(const char *key, const char *value)
{
	shash_node_t *shd;

	shd = malloc(sizeof(shash_node_t));
	if (shd == NULL)
		return (NULL);

	shd->key = strdup(key);
	if (shd->key == NULL)
	{
		free(shd);
		return (NULL);
	}
	shd->value = strdup(value);
	if (shd->value == NULL)
	{
		free(shd->key);
		free(shd);
		return (NULL);
	}

	shd->next = shd->snext = shd->sprev = NULL;
	return (shd);
}

/**
 * shash_table_set - Adds an element
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value associated
 *
 * Return: 1, 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	char *n_va;
	shash_node_t *shd, *tp;

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
	shd = m_sh_nd(key, value);
	if (shd == NULL)
		return (0);
	shd->next = ht->array[ind];
	ht->array[ind] = shd;
	add_to_sorted_list(ht, shd);
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated
 * @ht: The sorted hash table
 * @key: The key
 *
 * Return: The value associated , or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind;
	shash_node_t *tp;

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

/**
 * shash_table_print - Prints a sorted table
 * @ht: The sorted table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tp;
	char fg = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tp = ht->shead;
	while (tp != NULL)
	{
		if (fg == 1)
			printf(", ");
		printf("'%s': '%s'", tp->key, tp->value);
		fg = 1;
		tp = tp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints reverse hash table
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tp;
	char fg = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tp = ht->stail;
	while (tp != NULL)
	{
		if (fg == 1)
			printf(", ");
		printf("'%s': '%s'", tp->key, tp->value);
		fg = 1;
		tp = tp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int ii;
	shash_node_t *prv;

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
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}

/**
 * add_to_sorted_list - Adds a node to the sorted
 * @table: The sorted hash table
 * @n_nd: The new node
 *
 * Return: 1, 0
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *n_nd)
{
	shash_node_t *tp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = n_nd;
		return;
	}
	tp = table->shead;
	while (tp != NULL)
	{
		if (strcmp(n_nd->key, tp->key) < 0)
		{
			n_nd->snext = tp;
			n_nd->sprev = tp->sprev;
			tp->sprev = n_nd;
			if (n_nd->sprev != NULL)
				n_nd->sprev->snext = n_nd;
			else
				table->shead = n_nd;
			return;
		}
		tp = tp->snext;
	}
	n_nd->sprev = table->stail;
	table->stail->snext = n_nd;
	table->stail = n_nd;
}
