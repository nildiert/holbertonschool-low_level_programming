#include <unistd.h>

/**
 * reset_to_98 - Change the value of a variable
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
