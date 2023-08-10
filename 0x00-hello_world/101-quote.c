#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: program prints string
 *
 * Return: Always 1 (!Success)
*/

int main(void)
{
	char tsck []="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1,tsck,59);
	return (1);
}
