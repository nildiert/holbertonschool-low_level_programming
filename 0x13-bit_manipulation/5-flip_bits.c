#include <stdio.h>
#include "holberton.h"
/**
 * count_bits - check the code for Holberton School students.
 *
 * @n: the number that receives
 * Return: Always 0.
 */
unsigned long int count_bits(unsigned long int n)
{
	unsigned long int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - check the code for Holberton School students.
 *
 * @n: the number that receives
 * @m: the number that receives
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
