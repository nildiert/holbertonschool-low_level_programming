#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *_strncat - Concat two strings
 * @dest: The string that receives
 * @src: The second string that receives
 * @n: The number of char that prints
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (n > 0)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
		n--;
	}
	*(dest + i) = 0;
	return (dest);
}
