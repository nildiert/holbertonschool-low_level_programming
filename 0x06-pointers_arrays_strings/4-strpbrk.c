#include <unistd.h>
#include <stdio.h>
int verification(char *ac, char *st, int pos);

/**
 * *_strpbrk - Function that return the number that coincide two strings
 * verification - Function that verify the second array
 * @s: The character to print
 * @accept: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, n;

	while (*(s + i))
	{
		n = verification(accept, s, i);
		if (n != 0)
		{
			return (&s[i]);
		}
		i++;
	}
	n = (verification(accept, s, i));
	return (0);
}

/**
 * verification - Function that verify the second array
 * *_strpbrk - Function that return the number that coincide two strings
 * verification - Function that verify the second array
 * @ac: The character to print
 * @st: The character to print
 * @pos: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int verification(char *ac, char *st, int pos)
{
	int j = 0;

	while (*(ac + j))
	{
		if (st[pos] == ac[j])
		{
			return (pos);
		}
		j++;
	}
	return (0);
}
