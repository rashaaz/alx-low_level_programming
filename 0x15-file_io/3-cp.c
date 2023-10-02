#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define EOR_NOM "Error: Can't read from file %s\n"
#define EOR_NUMW "Error: Can't write to %s\n"
#define EOR_NUMcol "Error: Can't close fd %d\n"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Entry point
 * @argc: Number
 * @argv: Array
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	int num = 0, num1 = 0;
	ssize_t b;
	char buf[my_buf];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE), exit(97);
	}
	num = open(argv[1], O_RDONLY);
	if (num == -1)
	{
		dprintf(STDERR_FILENO, EOR_NOM, argv[1]), exit(98);
	}
	num1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERM);
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, EOR_NUMW, argv[2]), exit(99);
	}
	while ((b = read(num, buf, my_buf)) > 0)
	{
		if (write(num1, buf, b) != b)
		{
			dprintf(STDERR_FILENO, EOR_NUMW, argv[2]), exit(99);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, EOR_NOM, argv[1]), exit(98);
	}
	num = close(num);
	num1 = close(num1);
	if (num)
	{
		dprintf(STDERR_FILENO, EOR_NUMcol, num), exit(100);
	}
	if (num1)
		dprintf(STDERR_FILENO, EOR_NUMcol, num1), exit(100);
	return (EXIT_SUCCESS);
}
