#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: Pointer
 * @index: index
 *
 * Return: 1, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *co, *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	co = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (co == NULL)
			return (-1);
		co = co->next;
	}
	if (co == NULL || co->next == NULL)
		return (-1);

	tmp = co->next;
	co->next = tmp->next;
	free(tmp);
	return (1);
}
