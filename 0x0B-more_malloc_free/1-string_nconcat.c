#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - Swap the value of 2 variables
 * @s: The character that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;
	return (count);
}

/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: The first string that receives
 * @s2: The second string that receives
 * @n: The number of bytes that you need copy
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, len_s2 = 0;
	char *ar;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	len_s2 = _strlen(s2);
	if (n >= (unsigned int)len_s2)
	{
		ar = malloc(_strlen(s1) + len_s2 + 1);
	}
	else
	{
		ar = malloc(_strlen(s1) + n + 1);
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		ar[i] = s1[i];
	if (n >= (unsigned int)len_s2)
	{
		for (j = 0; s2[j]; j++, i++)
		{
			ar[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; (unsigned int)j < n; j++, i++)
			ar[i] = s2[j];
	}
	ar[i] = '\0';
	return (ar);
}
