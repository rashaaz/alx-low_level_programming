#include "lists.h"

/**
 * get_nodeint_at_index - Returns  nth node
 * @head: Pointer
 * @index: Index
 *
 * Return: Pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
			return (head);

		head = head->next;
		x++;
	}
	return (NULL);
}
