#include "lists.h"

void first(void) __attribute__((constructor));

/**
 * first - print before main
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
