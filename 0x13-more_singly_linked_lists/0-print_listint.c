#include "lists.h"

/**
 * print_listint - Prints elements
 * @h: Pointer
 *
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
