#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 *
 * @b: Pointing to string
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0;

	if (!b)
		return (0);
	for (sum = 0; *b; b++)
		if (*b == '1')
			sum = (sum << 1) | 1;
		else if (*b == '0')
			sum <<= 1;
		else
			return (0);
	return (sum);
}
