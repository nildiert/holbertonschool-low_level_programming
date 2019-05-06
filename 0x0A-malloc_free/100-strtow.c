#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
char **make_array(int width, int height);


/**
 * **strtow - Function that return a pointer
 * @str: The strings of arguments
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char **strtow(char *str)
{
	char **array;
	int i = 0, height = 0, count_char = 0, width = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			height++;
		if (str[i] != ' ' && str[i] != '\n')
		{
			count_char++;
		}
		else
		{
			if (str[i] == ' ')
			{
				if (count_char > width)
					width = count_char;
				count_char = 0;
			}
		}
		i++;
	}
	array = make_array(width, height);
	return (array);
}
/**
 * **make_array - Function that return an array of 2 dimensions
 * @width: The strings of arguments
 * @height: The strings of arguments
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char **make_array(int width, int height)
{
	char **new_array;
	int i, j;

	new_array = (char **)malloc(width * sizeof(char *));
	for (i = 0; i < width; i++)
	{
		new_array[i] = (char *)malloc(height * sizeof(char));
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			new_array[i][j] = 0;
	return (new_array);
}
