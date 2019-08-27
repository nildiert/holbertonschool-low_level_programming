#include "search_algos.h"

/**
 * linear_search - Entry point
 *
 * @array: Array
 * @size: Size of the array
 * @value: Value to find in the array
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", (int)i, array[i]);
		if ((int)array[i] == value)
			return ((int)i);
	}
	return (-1);

}
