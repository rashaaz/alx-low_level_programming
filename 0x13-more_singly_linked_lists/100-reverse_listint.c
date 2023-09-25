#include "lists.h"

/**
 * reverse_listint - reverses
 * @head: Pointer
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *frist = NULL;
	listint_t *end;

	while (*head != NULL)
	{
		end = (*head)->next;
		(*head)->next = frist;
		frist = *head;
		*head = end;
	}

	*head = frist;
	return (*head);
}
