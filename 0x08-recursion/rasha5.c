#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @r: The character to be written
 * 
 * Return: On success, the character is returned
 * On error, -1 is returned, and errno is set appropriately
*/

int _putchar(char r)
{
	        return (write(1, &r, 1));
}
