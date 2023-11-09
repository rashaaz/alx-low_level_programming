#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * @h: Pointer
 * @idx: The index
 * @n: The value to be stored
 * Return: the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *bi;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		cur = cur->next;
		if (cur == NULL)
			return (NULL);
	}
	if (cur->next == NULL)
		return (add_dnodeint_end(h, n));

	bi = malloc(sizeof(dlistint_t));
	if (bi == NULL)
		return (NULL);

	bi->n = n;
	bi->prev = cur;
	bi->next = cur->next;
	cur->next->prev = bi;
	cur->next = bi;

	return (bi);
}
