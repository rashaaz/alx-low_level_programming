#include "lists.h"

/**
 * free_list - Frees
 * @head: Pointer
 */
void free_list(list_t *head)
{
	list_t *cur;

	while (head)
	{
		cur = head;
		head = head->next;
		free(curr->str);
		free(cur);
	}
}
