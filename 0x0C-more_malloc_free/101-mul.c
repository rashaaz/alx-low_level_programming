#include "main.h"
#include <stdlib.h>

/**
 *  * is_digit - Check if a string is composed of digits.
 *   * @str: The input string to check.
 *    * Return: 1 if composed of digits, 0 otherwise.
 *     */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 *  * main - Entry point.
 *   * @argc: Number of arguments.
 *    * @argv: Array of arguments.
 *     * Return: 0 on success, 98 on error.
 *      */
int main(int argc, char *argv[])
{
	int len1, len2, i, j, k, carry, digit;
	int *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	result = calloc(len1 + len2, sizeof(int));

	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit = (argv[1][i] - '0') * (argv[2][j] - '0') + result[i + j + 1] + carry;
			carry = digit / 10;
			result[i + j + 1] = digit % 10;
		}
		result[i + j + 1] = carry;
	}

	for (k = 0; k < len1 + len2; k++)
	{
		if (k == 0 && result[k] == 0)
			continue;
		printf("%d", result[k]);
	}
	printf("\n");

	free(result);
	return (0);
}
