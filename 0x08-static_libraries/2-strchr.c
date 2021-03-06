#include <unistd.h>
#include <stdio.h>

/**
 * *_strchr - Function that return a memory position
 * @s: The character to print
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (&s[i]);
	}
	return (NULL);
}
