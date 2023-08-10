#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: program that prints size 
 *
 * Return: Always 0 (Success)
 */
	int main (void)
	{
		printf("size int: %lu byte(s)\n",sizeof(int));
		printf("size char: %lu byte(s)\n",sizeof(char));
		printf("size float: %lu byte(s)\n",sizeof(float));
		printf("size long long int: %lu byte(s)\n",sizeof(long long int));
		printf("size long: %lu byte(s)\n",sizeof(long int));
		
	}
