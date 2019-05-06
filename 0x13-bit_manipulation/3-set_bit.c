#include <stdio.h>
#include "holberton.h"


/**
 * set_bit - check the code for Holberton School students.
 *
 * @n: the number that receives
 * @index: the number that receives
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (!n)
		return (-1);
	if ((unsigned long int)index > (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
