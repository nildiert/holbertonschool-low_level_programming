#include "holberton.h"

/**
 *_abs - Return the absolute value of a number
 * @c: the character that receives
 *
 * Return: On success 1.
 *
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		c = c * -1;
		return (c);
	}
	_putchar(10);
}
