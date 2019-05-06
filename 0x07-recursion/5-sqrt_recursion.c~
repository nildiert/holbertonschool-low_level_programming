#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * _pow_recursion - Calculate the pow of a number
 * @x: The number that receives
 * @y: The pow of the number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		if (y == 0)
			return (1);
		else
			return (-1);
	}
}
