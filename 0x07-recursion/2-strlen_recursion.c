#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * _print_rev_recursion - writes a string in reverse
 * @s: The strings that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*(s) != 0)
	{
		return(1 + _strlen_recursion(s + 1));
	}
	else
	{
		return(0);
	}
}
