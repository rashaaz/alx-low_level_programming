#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: string between string
 * @n: The number of parameters
 * @...: The variable number of strings.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sh;
	int ii;
	char *s;

	va_start(sh, n);
	for (ii = 0; ii < n; ii++)
	{
		s = va_arg(sh, char *);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && ii != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(sh);
	printf("\n");
}
