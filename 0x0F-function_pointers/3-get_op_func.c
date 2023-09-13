#include "3-calc.h"

/**
 * get_op_func - Selects function
 * @s: operator
 *
 * Return: NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int ii = 0;

	while (ii < 5)
	{
		if (s && s[0] == ops[ii].op[0] && !s[1])
			return (ops[ii].f);
		ii++;
	}

	return (NULL);
}
