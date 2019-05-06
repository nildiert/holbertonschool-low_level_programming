#include <stdio.h>
#include "holberton.h"
#include <unistd.h>
int calculate(int n, int i);

/**
 * _sqrt_recursion - Calculate the square root
 * @n: The number that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (calculate(n, 1));
	}
}

/**
 * calculate - Calculate the square root
 * @n: The number that receives
 * @i: The number that iterate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int calculate(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else
	{
		if (i == n)
		{
			return (-1);
		}
		else
		{
			return (calculate(n, i + 1));
		}
	}
}
