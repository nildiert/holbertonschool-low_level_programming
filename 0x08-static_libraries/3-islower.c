#include "holberton.h"

/**
 *_islower - Return 1 if the variable is lowercase and 0 in other cases
 * @c: the character that receives
 *
 * Return: On success 1.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
