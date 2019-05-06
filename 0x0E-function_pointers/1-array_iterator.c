#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - prints a name as is
 * @array: Array with the elements
 * @size: Size of the array
 * @action: Pointer of the function that I need use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size && array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
