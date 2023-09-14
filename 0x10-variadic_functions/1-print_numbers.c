#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: string between numbers
 * @n: The number of parameters
 * @...: The variable number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sh;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(sh, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sh, int));

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(sh);
}
