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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
