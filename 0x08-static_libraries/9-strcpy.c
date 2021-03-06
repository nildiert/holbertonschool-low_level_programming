#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *_strcpy - Print only the number after the half
 * @dest: The string that receives
 * @src: The size of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}
