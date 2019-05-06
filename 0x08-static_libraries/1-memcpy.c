#include <unistd.h>
#include <stdio.h>

/**
 * *_memcpy - Function that fills memory with a constant byte
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while ((unsigned int)i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
