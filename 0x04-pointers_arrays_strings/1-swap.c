#include <unistd.h>

/**
 * swap_int - Swap the value of 2 variables
 * @b: The character that receives
 * @a: The character that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
