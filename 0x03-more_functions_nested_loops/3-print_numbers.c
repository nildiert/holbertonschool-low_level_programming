#include "holberton.h"

/**
 *print_numbers - Print the first 0 numbers
 * Return: On success 1.
 */
void print_numbers(void)
{
	int i = 0;
		while (i < 10)
		{
			_putchar(i + '0');
			i++;
		}
		_putchar(10);
}
