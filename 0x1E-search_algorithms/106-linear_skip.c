#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a skip list using linear skip search
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *gg;

if (list == NULL)
return (NULL);

gg = list;

do {
list = gg;
gg = gg->express;
printf("Value checked at index ");
printf("[%d] = [%d]\n", (int)gg->index, gg->n);
} while (gg->express && gg->n < value);

if (gg->express == NULL)
{
list = gg;
while (gg->next)
gg = gg->next;
}

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)list->index, (int)gg->index);

while (list != gg->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
if (list->n == value)
return (list);
list = list->next;
}

return (NULL);
}
