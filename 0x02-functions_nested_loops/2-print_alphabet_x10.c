#include "holberton.h"

/**
 *print_alphabet_x10 - Print the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int c, t;

	for (t = 0; t < 10 ; t++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(10);
	}
}
