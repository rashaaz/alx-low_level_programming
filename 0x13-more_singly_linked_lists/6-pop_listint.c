#include "lists.h"

/**
 * pop_listint - Deletes head
 * @head: Pointer
 *
 * Return: n, or 0
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (num);

	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (num);
}
