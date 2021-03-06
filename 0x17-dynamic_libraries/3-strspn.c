#include "holberton.h"
/**
 * *_strspn - Function that return a memory position
 * @s: The character to print
 * @accept: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0,  j;
	int count = 0;

	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (s[i] == s[j])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}
