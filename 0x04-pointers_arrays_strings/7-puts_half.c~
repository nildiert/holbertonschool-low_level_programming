#include <unistd.h>
#include "holberton.h"

/**
 * puts2 - Print only one character
 * @str: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int j = 0;

	while (*(str + j))
	{
		if ((j % 2) == 0)
		_putchar(*(str + j));
		j++;
	}
	_putchar(10);
}
