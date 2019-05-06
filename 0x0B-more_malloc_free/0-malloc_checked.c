#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *malloc_checked - Function that allocates memory
 * @b: The size of the memory that need
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
		exit(98);
	return (ar);
}
