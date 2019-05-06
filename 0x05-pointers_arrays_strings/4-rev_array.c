#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * reverse_array - Reverse a string
 * @a: The string that receives
 * @n: The second string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int change;

	n--;
	while (n >= j && n != j)
	{
		change = *(a + n);
		*(a + n) = *(a + j);
		*(a + j) = change;
		n--;
		j++;
	}
}
