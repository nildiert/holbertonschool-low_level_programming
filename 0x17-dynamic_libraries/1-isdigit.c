#include "holberton.h"
/**
 * _isdigit - Verify if the variable is digit
 * @c: The character that receives
 *
 * Return: On success 1.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
