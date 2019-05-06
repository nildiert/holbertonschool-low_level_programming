#include "holberton.h"

/**
 * print_line - Print n number of lines
 * @n: The character to receives
 *
 * Return: On success 1.
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(95);
	}
	_putchar(10);
}
