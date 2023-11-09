#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *co;
	int len = strlen(argv[1]), ii, tp;

	co = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tp = (len ^ 59) & 63;
	password[0] = co[tp];

	tp = 0;
	for (ii = 0; ii < len; ii++)
		tp += argv[1][ii];
	password[1] = co[(tp ^ 79) & 63];

	tp = 1;
	for (ii = 0; ii < len; ii++)
		tp *= argv[1][ii];
	password[2] = co[(tp ^ 85) & 63];

	tp = 0;
	for (ii = 0; ii < len; ii++)
	{
		if (argv[1][ii] > tp)
			tp = argv[1][ii];
	}
	srand(tp ^ 14);
	password[3] = co[rand() & 63];

	tp = 0;
	for (ii = 0; ii < len; ii++)
		tp += (argv[1][ii] * argv[1][ii]);
	password[4] = co[(tp ^ 239) & 63];

	for (ii = 0; ii < argv[1][0]; ii++)
		tp = rand();
	password[5] = co[(tp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
