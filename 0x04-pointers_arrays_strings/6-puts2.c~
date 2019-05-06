#include <unistd.h>
#include "holberton.h"

/**
 * rev_string - Print a string in reverse followed a new line
 * @s: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char change;

	while (*(s + j))
		j++;
	j--;
	while (i < j)
	{
		change = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = change;
		j--;
		i++;
	}
}
