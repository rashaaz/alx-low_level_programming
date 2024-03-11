#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a singly linked list using jump search
 * @list: Pointer to the head of the linked list
 * @size: Number of elements in the linked list
 * @value: Value to search for
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t index, kk, mm;
listint_t *prev;

if (list == NULL || size == 0)
return (NULL);

mm = (size_t)sqrt((double)size);
index = 0;
kk = 0;

do {
prev = list;
kk++;
index = kk * mm;

while (list->next && list->index < index)
list = list->next;

if (list->next == NULL && index != list->index)
index = list->index;

printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

} while (index < size && list->next && list->n < value);

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

for (; prev && prev->index <= list->index; prev = prev->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
if (prev->n == value)
return (prev);
}

return (NULL);
}
