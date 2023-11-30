#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key
 * @size: The size
 *
 * Return: The index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
