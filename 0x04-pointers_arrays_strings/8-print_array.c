#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * print_array - Print only the number after the half
 * @a: The string that receives
 * @n: The size of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
		i++;
	}
	printf("\n");
}
