#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{

	size_t i = 0;
	size_t first;
	size_t half;
	size_t last;

	(void)size;
	(void)value;
	if (!array)
		return (-1);

	first = 0;
	last = size - 1;
	for (i = 0; i < size; i++)
	{
		half = ((last - first) / 2);
		if (value == array[half])
		{
			printf("Es igual! value %d half %d\n", value, (int)half);
			return ((int)half);
		}
		else if (value < array[half])
		{
			printf("Value(%d) es menor que array[half](%d)\n", value, array[half]);
			last = half;

		}
		else
		{
			printf("Value(%d) es mayor que array[half](%d)\n", value, array[half]);
			first = half;
		}


	}

	return (-1);
}
