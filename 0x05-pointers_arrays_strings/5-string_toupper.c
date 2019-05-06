#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *string_toupper - Reverse a string
 * @s: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) - 'a' + 'A';
		i++;
	}
	return (s);
}
