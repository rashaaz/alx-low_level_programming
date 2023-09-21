#include "lists.h"

/**
 * list_len - number elements
 * @h: Pointer
 *
 * Return: number
*/
size_t list_len(const list_t *h)
{
	size_t co = 0;

	while (h)
	{
		co++;
		h = h->next;
	}

	return (co);
}
