#include <stdio.h>

/**
 * first - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void first(void) __attribute__ ((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
