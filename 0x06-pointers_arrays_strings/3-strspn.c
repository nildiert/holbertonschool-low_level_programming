#include <unistd.h>
#include <stdio.h>

/**
 * *_strspn - Function that return the number that coincide two strings
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

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		if (count < i)
			break;
		i++;
	}
		return (count);
}
