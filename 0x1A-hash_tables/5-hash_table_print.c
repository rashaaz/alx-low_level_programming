#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ii;
	hash_node_t *tp;
	char fg = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (ii = 0; ii < ht->size; ii++)
	{
		tp = ht->array[ii];
		while (tp != NULL)
		{
			if (fg == 1)
				printf(", ");
			printf("'%s': '%s'", tp->key, tp->value);
			fg = 1;
			tp = tp->next;
		}
	}
	printf("}\n");
}
