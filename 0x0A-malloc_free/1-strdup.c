#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *_strdup - Function that copy an array
 * @str: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ar;

	if (!str)
		return (NULL);
	while (str[size])
		size++;
	ar = malloc(size * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = str[i];
	ar[i] = '\0';
	return (ar);
}
