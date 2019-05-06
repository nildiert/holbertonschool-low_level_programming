#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers up to 98
 *
 * @n: number to start counting at
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		while (n < 99)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			++n;
		}
	}
	else
	{
		while (n > 97)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			--n;
		}
	}
	printf("\n");
}
