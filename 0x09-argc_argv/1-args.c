#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: The size of the array *argv
 * @argv: The array with the command lines
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
