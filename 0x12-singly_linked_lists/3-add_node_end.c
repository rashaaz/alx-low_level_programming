#include "lists.h"

/**
 * add_node_end - add  new node at end
 * @head: Pointer
 * @str: string
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	size_t ll = 0;
	char *co;

	while (str && str[ll])
		ll++;

	co = strdup(str);

	if (!co)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!new)
	{
		free(co);
		return (NULL);
	}
	new->str = co;
	new->len = ll;
	new->next =  NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
