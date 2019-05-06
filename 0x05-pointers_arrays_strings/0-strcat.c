#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *_strcat - Concat two strings
 * @dest: The string that receives
 * @src: The second string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = 0;
	return (dest);
}
