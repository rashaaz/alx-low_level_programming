#include "lists.h"

/**
 * print_dlistint - Print all elements
 * @h: Pointer
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ii = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ii++;
	}
	return (ii);
}
