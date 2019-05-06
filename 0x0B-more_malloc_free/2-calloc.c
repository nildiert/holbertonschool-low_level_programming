#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *_calloc - Function that allocates memory for an array
 * @nmemb: The number of elements
 * @size: The size of the elements
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = '\0';
	}
	return (array);
}
