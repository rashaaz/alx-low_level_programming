#include "main.h"

/**
 * _len - Calculate length
 * @c: Pointer
 *
 * Return: Length
 */

int _len(char *c)
{
	int x = 0;

	if (!c)
		return (0);

	while (*c++)
		x++;
	return (x);
}

/**
 * create_file - Create and write file
 * @filename: file name
 * @text_content: The content
 *
 * Return: 1 , or -1
 */

int create_file(const char *filename, char *text_content)
{
	int num;
	ssize_t b = 0, n = _len(text_content);

	if (!filename)
		return (-1);
	num = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (num == -1)
		return (-1);
	if (n)
		b = write(num, text_content, n);
	close(num);
	return (b == n ? 1 : -1);

}
