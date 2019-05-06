#include "holberton.h"
/**
 * *_strpbrk - Function that return the number that coincide two strings
 * verification - Function that verify the second array
 * @s: The character to print
 * @accept: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, n;

	while (*(s + i))
	{
		n = verification(accept, s, i);
		if (n != 0)
		{
			return (&s[i]);
		}
		i++;
	}
	n = (verification(accept, s, i));
	return (0);
}
