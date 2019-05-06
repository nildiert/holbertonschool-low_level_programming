#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *array_range - Function that allocates memory for an array of integers
 * @min: The min number
 * @max: The max number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *array;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (!ptr)
	{
		array = malloc(new_size);
	}
	if (new_size > old_size)
	{
		/*No inicializar memoria*/
	}
	if (new_size == 0 && ptr != NULL)
        {
		free (ptr);
		return (NULL);
                /*No inicializar memoria*/
        }

	return (array);
}
