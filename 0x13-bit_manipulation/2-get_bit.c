#include <stdio.h>
#include "holberton.h"


/**
 * get_bit - check the code for Holberton School students.
 *
 * @n: the number that receives
 * @index: the number that receives
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (((unsigned long int)index) > sizeof(unsigned long int) * 8)
		return (-1);
	else
		return (n >> index & 1);
}
