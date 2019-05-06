#include "holberton.h"

/**
 * more_numbers - Print 10 times 14 numbers
 *
 * Return: On success 1.
 */
void more_numbers(void)
{
	int j, i = 0;

	for (j = 0; j < 10; j++)
	{
		while (i <= 14)
		{
			if (i / 10 != 0)
			{
				_putchar (i / 10 + '0');
			}
			_putchar (i % 10 + '0');
			i++;
		}
		i = 0;
		_putchar (10);
	}
}
