#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 48; c <= 102; c++)
	{
		if ((c >= 48 && c <= 57) || (c >= 97 && c <= 102))
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
