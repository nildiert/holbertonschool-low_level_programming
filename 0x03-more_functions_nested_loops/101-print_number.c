#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int numero = 900978, lenght = 0, mod, div = 10, inc = 10;

	while (numero)
	{
		lenght++;
		numero /= 10;
	}
	lenght--;
	printf ("%d", lenght);
	while(--lenght)
	{
		printf("%d", lenght);
		inc *= 10;
	}
	printf("/n%d", numero % inc);

	return (0);
}
