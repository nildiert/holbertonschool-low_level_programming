#include <unistd.h>
#include "holberton.h"

/**
 * puts_half - Print only the number after the half
 * @str: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int j = 0, n;

	while (*(str + j))
		j++;
	if ((j % 2) == 0)
	{
		n = (j / 2);
	}
	else
	{
		n = ((j + 1) / 2);
	}
	while (*(str + n))
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar(10);
}
