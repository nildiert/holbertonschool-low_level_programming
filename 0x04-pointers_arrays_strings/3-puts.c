#include <unistd.h>
#include "holberton.h"

/**
 * _puts - Print a string with a new line
 * @str: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count))
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar(10);
}
