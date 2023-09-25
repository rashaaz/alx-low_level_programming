#include "lists.h"

/**
 * free_listint2 - Frees
 * @head: Pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *co;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		co = *head;
		*head = (*head)->next;
		free(co);
	}
}
