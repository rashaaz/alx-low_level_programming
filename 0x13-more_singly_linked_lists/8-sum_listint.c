#include "lists.h"

/**
 * sum_listint - returns  sum
 * @head: Pointer
 *
 * Return: sum, or 0
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
