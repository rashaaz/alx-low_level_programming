#include "lists.h"

/**
 * add_node - adds new node
 * @head: Pointer
 * @str: string
 *
 * Return: address
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;

	return (new);
}
