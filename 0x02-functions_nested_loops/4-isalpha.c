#include "holberton.h"

/**
 *_isalpha - Return 1 if the variable is alphanumerical and 0 in other cases
 * @c: the character that receives
 *
 * Return: On success 1.
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
