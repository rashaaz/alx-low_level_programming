#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t pp, ll, hh;
double ff;

if (array == NULL)
return (-1);

ll = 0;
hh = size - 1;

while (size)
{
ff = (double)(hh - ll) / (array[hh] - array[ll]) * (value - array[ll]);
pp = (size_t)(ll + ff);
printf("Value checked array[%d]", (int)pp);

if (pp >= size)
{
printf(" is out of range\n");
break;
}
else
{
printf(" = [%d]\n", array[pp]);
}

if (array[pp] == value)
return ((int)pp);

if (array[pp] < value)
ll = pp + 1;
else
hh = pp - 1;

if (ll == hh)
break;
}

return (-1);
}
