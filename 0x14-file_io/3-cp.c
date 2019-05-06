#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * @ac: Number of arguments
 * @av: Arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_desc1, file_desc2, close1, close2, size = 1024;
	char buffer[1024];

	if (ac != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_desc1 = open(av[1], O_RDONLY);
	if (file_desc1 == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	file_desc2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_desc2 == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (size == 1024)
	{
		size = read(file_desc1, buffer, 1024);
		if (size == -1)
		{ dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", av[1]);
			exit(98); }
		size = write(file_desc2, buffer, size);
		if (size == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	close1 = close(file_desc1);
	close2 = close(file_desc2);
	if (close1 == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc1);
		exit(100); }
	if (close2 == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc2);
		exit(100); }
	return (0);
}
