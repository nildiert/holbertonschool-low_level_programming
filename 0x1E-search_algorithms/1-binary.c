#include "search_algos.h"


/**
 * print_array - Entry point
 *
 * @array: Array
 * @first: Size of array
 * @last: Value to find
 * Return: Always EXIT_SUCCESS
 */
void print_array(int *array, int first, int last)
{
	int i;

	printf("Searching in array: ");
	for (i = first; i < last; i++)
		printf("%d, ", array[i]);
	printf("%d", array[i]);
	printf("\n");
}


/**
 * binary_search - Entry point
 *
 * @array: Array
 * @size: Size of array
 * @value: Value to find
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first;
	size_t half;
	size_t last;

	(void)size;
	(void)value;
	if (!array)
		return (-1);

	first = 0;
	last = size - 1;
	while (first <= last)
	{
		print_array(array, (int)first, (int)last);
		half = first + (last - first) / 2;
		if (array[half] == value)
			return ((int)(half));
		if (array[half] < value)
			first = half + 1;
		else
			last = half - 1;
	}

	return (-1);
}
