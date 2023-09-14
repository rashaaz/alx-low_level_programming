#include "variadic_functions.h"

/**
 * _char - Print character.
 * @sep: pointer
 * @sh: The va_list
 */
void _char(char *sep, va_list sh)
{
	printf("%s%c", sep, va_arg(sh, int));
}

/**
 * _int - Print integer.
 * @sep: pointer.
 * @sh: The va_list
 */
void _int(char *sep, va_list sh)
{
	printf("%s%d", sep, va_arg(sh, int));
}

/**
 * _float - Print  float
 * @sep: pointer
 * @sh: The va_list of arguments.
 */
void _float(char *sep, va_list sh)
{
	printf("%s%f", sep, va_arg(sh, double));
}

/**
 * _string - Print string.
 * @sep: pointer
 * @sh: The va_list
 */
void _string(char *sep, va_list sh)
{
	char *s = va_arg(sh, char *);

	if (!s)
		s = "(nil)";

	printf("%s%s", sep, s);
}

/**
 * print_all - Print all of them
 * @format: format specifiers for arguments
 */
void print_all(const char * const format, ...)
{
	va_list sh;
	int ii = 0, jj;
	char *sep = "";
	rr_s mm[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string},
		{NULL, NULL}
	};

	va_start(sh, format);

	while (format && format[ii])
	{
		jj = 0;

		while (mm[jj].rr)
		{
			if (format[ii] == mm[jj].rr[0])
			{
				mm[jj].ss(sep, sh);
				sep = ", ";
			}
			jj++;
		}
		ii++;
	}

	printf("\n");
	va_end(sh);
}
