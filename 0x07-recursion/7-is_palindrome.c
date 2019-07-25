#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

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

int calc(char *i, char *j)
{
	printf("Esto es i %c esto es j %c", *i, *j);
	return (1);
}



/**
 * _sqrt_recursion - Calculate the square root
 * @n: The number that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s) - 1;
	return (calc(*s, *(s + len));
}
