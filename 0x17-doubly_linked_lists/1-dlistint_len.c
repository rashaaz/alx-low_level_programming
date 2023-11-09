#include "lists.h"

/**
 * dlistint_len - Returns the number of elements
 * @h: Pointer
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ii = 0;

	while (h)
	{
		h = h->next;
		ii++;
	}
	return (ii);
}
