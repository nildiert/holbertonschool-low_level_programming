#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * factorial - Prints the factorial of a number
 * @n: The number that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		if (n == 0)
			return (1);
		else
			return (-1);
	}
}
