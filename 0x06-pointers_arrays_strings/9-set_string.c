#include <unistd.h>
#include <stdio.h>

/**
 * set_string - Function that return the number that coincide two strings
 * @s: The character to print
 * @to: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
