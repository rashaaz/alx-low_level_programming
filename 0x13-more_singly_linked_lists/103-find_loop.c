#include "lists.h"

/**
 * find_listint_loop - Finds loop
 * @head: Pointer
 *
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor, *hh;

	if (!head || !head->next)
		return (NULL);

	tor = head->next;
	hh = head->next->next;

	while (hh && hh->next)
	{
		if (tor == hh)
		{
			tor = head;
			while (tor != hh)
			{
				tor = tor->next;
				hh = hh->next;
			}
			return (tor);
		}
		tor = tor->next;
		hh = hh->next->next;
	}
	return (NULL);
}
