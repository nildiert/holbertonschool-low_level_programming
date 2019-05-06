#include <stdio.h>

/**
 *print_to_98 - Function that print all the numbers from to 98
 * @n: the variable that receives
 *
 *Return: print numbers
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
