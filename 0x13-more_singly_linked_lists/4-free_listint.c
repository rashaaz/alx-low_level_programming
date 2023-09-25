#include "lists.h"

/**
 * free_listint - Frees
 * @head: Pointer
 */
void free_listint(listint_t *head)
{
	listint_t *co;

	while (head)
	{
		co = head;
		head = head->next;
		free(co);
	}
}
