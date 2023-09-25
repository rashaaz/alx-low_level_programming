#include "lists.h"

/**
 * print_listint_safe - Prints linked list
 * @head: Pointer
 *
 * Return: number
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t co = 0, i;
	const listint_t **no = NULL;

	while (head)
	{
		for (i = 0; i < co; i++)
		{
			if (head == no[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (co);
			}
		}
		co++;
		no = sh(no, co, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(no);
	return (co);
}

/**
 * sh - adds new node
 * @li: pointer
 * @s: size
 * @n: pointer
 *
 * Return: pointer, or 98.
 */
const listint_t **sh(const listint_t **li, size_t s, const listint_t *n)
{
	const listint_t **new;
	size_t i;

	new = malloc(s * sizeof(listint_t *));
	if (new == NULL)
	{
		free(li);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
	{
		new[i] = li[i];
	}
	new[s - 1] = n;

	if (li != NULL)
		free(li);

	return (new);
}
