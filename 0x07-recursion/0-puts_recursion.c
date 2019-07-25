#include "holberton.h"

/**
 * _puts_recursion - Function to print recursive
 * @s: Character that receives
 *
 */

void _puts_recursion(char *s)
{
	if (s != '\0')
		_putchar(*s);
	else
		_puts_recursion();
}
