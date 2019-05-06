#include "holberton.h"

/**
 *print_sign - Print the symbol of the number
 * @c: the character that receives
 *
 * Return: On success 1.
 *
 */
int print_sign(int c)
{
	if (c > 48)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (c == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
	_putchar(10);
}
