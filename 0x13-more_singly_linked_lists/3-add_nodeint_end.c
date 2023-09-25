#include "lists.h"

/**
 * add_nodeint_end - Add a new node
 * @head: Pointer
 * @n: number
 *
 * Return: address, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *co;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	co = *head;
	while (co->next)
	{
		co = co->next;
	}
	co->next = new;
	return (new);
}
