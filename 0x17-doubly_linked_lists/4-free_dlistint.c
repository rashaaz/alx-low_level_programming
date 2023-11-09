#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t
 * @head: Pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nd;

	while (head)
	{
		nd = head;
		head = head->next;
		free(nd);
	}
}
