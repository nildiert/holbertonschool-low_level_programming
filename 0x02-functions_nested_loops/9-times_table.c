#include "holberton.h"

/**
 *times_table - Function that print the 9 times table
 *
 */
void times_table(void)
{
	int h1, h2, res;

	for (h1 = 0; h1 < 10; h1++)
	{
		for (h2 = 0; h2 < 10; h2++)
		{
			if (h2 != 0)
			{
				_putchar(' ');
			}
			res = h1 * h2;
			if (res / 10 != 0)
			{
				_putchar(res / 10 + '0');
			}
			else
			{
				if (h2 != 0)
				{
				_putchar(' ');
				}
			}
			_putchar(res % 10 + '0');
			if (h2 != 9)
			{
				_putchar(',');
			}
		}
		_putchar(10);
	}
}
