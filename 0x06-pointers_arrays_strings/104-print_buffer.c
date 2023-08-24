#include <stdio.h>

/**
 * print_hex - Print hexadecimal
 * @b: Pointer
 * @x: the start
 * @y: the end
*/
void print_hex(const char *b, int x, int y)
{
	int ii;

	for (ii = 0; ii < 10; ii++)
	{
		if (ii < y)
			printf("%02x", *(b + x + ii));
		else
			printf("  ");

		if (ii % 2)
			printf(" ");
	}
}

/**
 * is_printable - Check if character is printable
 * @c: Character
 *
 * Return: 1 if printable, 0 if not
*/
int is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

/**
 * print_text - Print text
 * @b: Pointer
 * @x: the start
 * @y: the end
*/
void print_text(char *b, int x, int y)
{
	int ii;
	char c;

	for (ii = 0; ii < y; ii++)
	{
		c = *(b + ii + x);
		if (!is_printable(c))
			c = '.';
		printf("%c", c);
	}
}

/**
 * print_buffer - Print buffer content
 * @b: Pointer to buffer
 * @size: Size of the buffer
*/
void print_buffer(char *b, int size)
{
	int ii, jj;

	if (size > 0)
	{
		for (ii = 0; ii < size; ii += 10)
		{
			jj = (size - ii < 10) ? size - ii : 10;
			printf("%08x: ", ii);
			print_hex(b, ii, jj);
			printf(" ");
			print_text(b, ii, jj);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
