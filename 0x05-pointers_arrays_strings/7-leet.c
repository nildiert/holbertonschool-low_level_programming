#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *leet - Capitalize
 * @s: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char *lowercase = "aeotl";
	char *uppercase = "AEOTL";
	char *reeplace = "43071";

	while (*(s + i))
	{
		j = 0;
		while (lowercase[j])
		{
			if (*(s + i) == lowercase[j] || *(s + i) == uppercase[j])
			{
				*(s + i) = reeplace[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
