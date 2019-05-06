#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * @args: Number of arguments that receives
 * @argv: Arguments that receives
 * Return: Always 0.
 */
int main(int args, char *argv[])
{
	if (args != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
