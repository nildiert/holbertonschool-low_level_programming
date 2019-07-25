#include "holberton.h"
#include <unistd.h>
#include <stdio.h>


int calculate(int number, int value, int count)
{
	/* printf("number %d value %d count %d\n", number, value, count); */
	/* if (count > 2 || number <= 1 ) */
		return (0);
	else
	{
		if (count == 2 && number == value - 1)
			return (1);
		else
		{
			if (number % value == 0)
				return (calculate(number, value + 1, count + 1));
			else
				return (calculate(number, value + 1, count));
		}
	}
}


/**
 * _sqrt_recursion - Calculate the square root
 * @n: The number that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_prime_number(int n)
{
	return calculate(n, 1, 0);
}
