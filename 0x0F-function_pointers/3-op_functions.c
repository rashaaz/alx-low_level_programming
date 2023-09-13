#include "3-calc.h"

/**
 * op_add - add two numder
 * @a: number
 * @b: number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two numder
 * @a: number
 * @b: number
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two number
 * @a: number
 * @b: number
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two number
 * @a: number
 * @b: number
 *
 * Return: div ot 100
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod two number
 * @a: number
 * @b: number
 *
 * Return: div or 100
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
