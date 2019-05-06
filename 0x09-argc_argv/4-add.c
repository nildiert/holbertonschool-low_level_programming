#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: The size of the array *argv
 * @argv: The array with the command lines
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j = 0, k;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}

	for (i = 1; i < argc; i++)
	{
		for (k = 0; (argv[i][k]) != '\0'; k++)
		{
			if (isdigit((argv[i][k])) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		j += atoi((argv[i]));
	}
	printf("%d\n", j);
	return (0);
}
