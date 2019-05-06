#include <unistd.h>
#include <stdio.h>

/**
 * *_memset - Function that fills memory with a constant byte
 * @s: The character to print
 * @b: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while ((unsigned int)i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
