#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 *
 * @argc: Numbers of arguments
 * @argv: Array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int function;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != 0 || (argv[2][0] != '+' && argv[2][0] != '-' &&
				argv[2][0] != '*' && argv[2][0] != '/' &&
				argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	function = get_op_func(argv[2])(atoi(argv[1]), (atoi(argv[3])));
	printf("%d\n", function);
	return (0);
}
