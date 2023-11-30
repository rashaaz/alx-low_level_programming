#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size
 *
 * Return: A pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int ii;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_table_t *));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (ii = 0; ii < size; ii++)
		hash_table->array[ii] = NULL;
	return (hash_table);
}
