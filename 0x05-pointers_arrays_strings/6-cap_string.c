#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *cap_string - Capitalize
 * @s: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char *conditions = ", \t\n.;?\"(){}";

	while (*(s + i))
	{
		j = 0;
		while (conditions[j])
		{
			if (*(s + i) == conditions[j])
			{
				if (((*(s + (i + 1))) >= 'a' && (*(s + (i + 1))) <= 'z'))
				{
					*(s + (i + 1)) = *(s + (i + 1)) - 'a' + 'A';
				}
			}
			j++;
		}
		if (i == 0)
		{
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
			{
				*(s + i) = *(s + i) - 'a' + 'A';
			}
		}
		i++;
	}
	return (s);
}
