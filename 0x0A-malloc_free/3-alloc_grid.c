#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * **alloc_grid - Function that return a pointer
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	if (width < 1 || height < 1)
		return (NULL);
	ar = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		ar[i] = (int *)malloc(height * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(ar[j]);
			return (NULL);
		}
	}
	if (ar == NULL)
        {
		for(i = 0; i < height; i++)
			free(ar[i]);
                return (NULL);
        }

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
		ar[i][j] = 0;
	return (ar);
}
