#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * @head: Pointer
 * @n: The value to be stored
 * Return: new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *bi = malloc(sizeof(dlistint_t));

	if (!head || !bi)
		return (bi ? free(bi), NULL : NULL);

	bi->n = n;
	bi->prev = NULL;
	if (!*head)
	{
		*head = bi;
		bi->next = NULL;
	}
	else
	{
		bi->next = *head;
		(*head)->prev = bi;
		*head = bi;
	}
	return (bi);
}
