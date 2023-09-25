#include "lists.h"

/**
 * free_listint_safe - free
 * @h: Pointer
 *
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *co = *h;
	listint_t *n = NULL;

	while (co)
	{
		num++;
		n = co->next;
		free(co);

		if ((void *)n <= (void *)co)
		{
			*h = NULL;
			break;
		}
		co = n;
	}
	*h = NULL;
	return (num);
}
