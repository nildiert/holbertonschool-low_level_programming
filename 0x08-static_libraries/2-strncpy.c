#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *_strncpy - Copy one string
 * @dest: The string that receives
 * @src: The second string that receives
 * @n: The number of char that prints
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
	*(dest + i) = '\0';
	i++;
	}
	return (dest);
}
