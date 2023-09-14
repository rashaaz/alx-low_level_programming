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
	int ii = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(sh, n);

	while (ii--)
		printf("%d%s", va_arg(sh, int));
	i ? (separator ? separator : "") : "\n");
	va_end(sh);
}
