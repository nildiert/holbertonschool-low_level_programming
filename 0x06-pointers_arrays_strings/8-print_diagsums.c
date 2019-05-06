#include <unistd.h>
#include <stdio.h>

/**
 * print_diagsums - Print the summatory of 2 diagonals
 * @a: The character to print
 * @size: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int  i = 0;
	int principal = size + 1;
	int inverse = size - 1;
	int count = 0;
	int sumprim = 0, suminv = 0;

	for (i = 0; i < (size * size); i += principal)
		sumprim += a[i];
	for (i = size - 1; i < (size * size) - 1; i += inverse)
	{
		suminv += a[i];
		count++;
			if (count > size)
			break;
	}
	printf("%d, %d\n", sumprim, suminv);
}
