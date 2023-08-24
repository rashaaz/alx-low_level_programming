#include <stdio.h>

/**
 * print_hex - Print hexadecimal
 * @b: Pointer
 * @x: the start
 * @y: the end
*/
void print_hex(char *b, int x, int y)
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
 * print - check
 * @r: Pointer
 *
 * Return: value
*/
int print(int r)
{
	return (r >= 32 && r <= 126);
}

/**
 * print_text - Print text
 * @b: Pointer
 * @xx: the start
 * @yy: end
*/
void print_text(char *b, int xx, int yy)
{
	int ii;
	int mm;

	for (ii = 0; ii < yy; ii++)
	{
		mm = *(b + ii + xx);
		if (!print(mm))
			mm = 46;
		printf("%c", mm);
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
			print_text(b, ii, jj);
			printf("\n");
		}

	} else
		printf("\n");
}
