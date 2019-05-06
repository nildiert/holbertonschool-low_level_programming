#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *create_array - Function that creates an array
 * @size: The size of the array
 * @c: The character that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; (unsigned int)i < size; i++)
	{
		ar[i] = c;
	}
	ar[i] = '\0';
	return (ar);
}
