#include "holberton.h"

/**
 *print_last_digit - Function that return the last digit of a number
 * @c: the character that receives
 *
 * Return: last
 *
 */
int print_last_digit(int c)
{
	int last;

	if (c < 0)
	{
		last = -c % 10;
	}
	else
	{
		last = c % 10;
	}
	_putchar(last + '0');
	return (last);
}
