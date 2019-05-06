#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * free_grid - Function that return a pointer
 * @grid: The width of the array
 * @height: The height of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_grid(int **grid, int height)
{
	int j = 0, size = 0;

	(void)height;
	if (grid != NULL)
	{
		while (*(grid + size))
			size++;
		for (j = 0; j < (size); j++)
			free(grid[j]);
		free(grid);
	}
}
