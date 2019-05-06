#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *rot13 - Root13
 * @s: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *reeplace = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i))
	{
		j = 0;
		while (table[j])
		{
			if (*(s + i) == table[j])
			{
				*(s + i) = reeplace[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
