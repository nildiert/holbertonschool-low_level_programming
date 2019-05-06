#include "holberton.h"

/**
 * print_diagonal - Print n times a diagonal line
 * @n: The character to receives
 *
 * Return: On success 1.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar(92);
			}
			else
			{
				if (j < i)
				{
					_putchar(32);
				}
			}
		}
		_putchar(10);
	}
}
