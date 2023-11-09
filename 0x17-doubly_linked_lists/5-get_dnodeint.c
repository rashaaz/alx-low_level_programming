#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node
 * @head: Pointer
 * @index: The index
 * Return: The nth node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ii = 0;

	while (head)
	{
		if (ii == index)
			return (head);
		head = head->next;
		ii++;
	}
	return (NULL);
}
