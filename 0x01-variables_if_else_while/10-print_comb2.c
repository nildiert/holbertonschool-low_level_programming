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
	int f, c;

	for (f = 48; f <= 57; f++)
	{
		for (c = 48; c <= 57; c++)
		{
			putchar (f);
			putchar (c);
			if (f != 57 || c != 57)
{
				putchar (44);
				putchar (' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
