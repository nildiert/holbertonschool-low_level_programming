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
int *array_range(int min, int max)
{
	int *array, i, min_n;

	if (min > max)
		return (NULL);
	array = malloc(((max - min) + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	min_n = min;
	for (i = 0; i <= (max - min); i++, min_n++)
		array[i] = min_n;
	return (array);
}
