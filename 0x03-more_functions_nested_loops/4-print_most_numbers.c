#include "holberton.h"

/**
 *print_most_numbers - Print 9 numbers exceptions of the numbers 2 and 4
 * Return: On success 1.
 */
void print_most_numbers(void)
{
	int i = 0;
		while (i < 10)
		{
			if (i != 2 && i != 4)
			{
			_putchar(i + '0');
			}
			i++;
		}
		_putchar(10);
}
