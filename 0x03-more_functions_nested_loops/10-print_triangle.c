#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: The character to receives
 *
 * Return: On success 1.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < (size - (i + 1)))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar(10);
	}
}
