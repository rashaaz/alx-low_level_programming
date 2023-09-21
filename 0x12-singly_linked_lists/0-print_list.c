#include "lists.h"

/**
 * print_list - Prints the elements
 * @h: Pointer
 *
 * Return: number
 */
size_t print_list(const list_t *h)
{
	size_t co = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		co++;
		h = h->next;
	}

	return (co);
}
