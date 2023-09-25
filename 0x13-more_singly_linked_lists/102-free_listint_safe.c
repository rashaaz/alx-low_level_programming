#include "lists.h"

/**
 * free_listint_safe - free
 * @h: Pointer
 *
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num;
	listint_t *co, *oop;
	int op = 1;

	if (h == NULL || *h == NULL)
		return (0);
	oop = find(*h);
	for (num = 0; (*h != oop || op) && *h != NULL; *h = co)
	{
		num++;
		co = (*h)->next;
		if (*h == oop && op)
		{
			if (oop == oop->next)
			{
				free(*h);
				break;
			}
			num++;
			co = co->next;
			free((*h)->next);
			op = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (num);
}

/**
 * find - Finds
 * @head: Pointer
 *
 * Return: addres, or NULL
 */

listint_t *find(listint_t *head)
{
	listint_t *tp, *finsh;

	if (head == NULL)
		return (NULL);
	for (finsh = head->next; finsh != NULL; finsh = finsh->next)
	{
		if (finsh == finsh->next)
			return (finsh);
		for (tp = head; tp != NULL; tp = tp->next)
			if (tp == finsh->next)
				return (finsh->next);
	}
	return (NULL);
}
