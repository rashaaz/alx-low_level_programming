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
	int ii;

	va_start(sh, n);

	for (ii = 0; ii < n; ii++)
	{
		printf("%d", va_arg(sh, int));

		if (separator && ii != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(sh);

	printf("\n");
}
