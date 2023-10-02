#include "main.h"

/**
 * read_textfile - read file
 * @filename: file name
 * @letters: The size
 *
 * Return: b
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int num;
	ssize_t b;
	char buf[my_buf * 8];

	if (!filename || !letters)
		return (0);
	num = open(filename, O_RDONLY);
	if (num == -1)
		return (0);
	b = read(num, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(num);
	return (b);
}
