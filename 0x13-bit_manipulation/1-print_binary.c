#include <stdio.h>
#include "holberton.h"


/**
 * _binary - check the code for Holberton School students.
 *
 * @n: the number that receives
 * Return: Always 0.
 */
void _binary(unsigned long int n)
{
	if (n)
		_binary(n >> 1);
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
}


/**
 * print_binary - check the code for Holberton School students.
 *
 * @n: the number that receives
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
		_binary(n);
	else
		_putchar('0');
}
