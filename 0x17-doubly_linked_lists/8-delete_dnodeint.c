#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node in indx
 * @head: Pointer
 * @index: The index
 * Return: 1, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (cur == NULL)
			return (-1);
		cur = cur->next;
	}
	if (cur == *head)
	{
		*head = cur->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		cur->prev->next = cur->next;
		if (cur->next != NULL)
			cur->next->prev = cur->prev;
	}
	free(cur);
	return (1);
}
