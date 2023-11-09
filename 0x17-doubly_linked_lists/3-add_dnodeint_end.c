#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: Pointer
 * @n: The value to be stored
 * Return: the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *bi = malloc(sizeof(dlistint_t)), *nd;

	if (!head || !bi)
		return (bi ? free(bi), NULL : NULL);

	bi->n = n;
	bi->next = NULL;
	if (!*head)
	{
		bi->prev = NULL;
		*head = bi;
	}
	else
	{
		nd = *head;
		while (nd->next)
			nd = nd->next;

		nd->next = bi;
		bi->prev = nd;
	}
	return (bi);
}
