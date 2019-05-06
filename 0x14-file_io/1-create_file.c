#include "holberton.h"
/**
 * _strlen - Swap the value of 2 variables
 * @s: The character that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;
	return (count);
}
/**
 * create_file - check the code for Holberton School students.
 *
 * @filename: File
 * @text_content: size to print
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content == NULL)
		return (1);
	if (file == -1)
		return (-1);
	write(file, text_content, _strlen(text_content));
	close(file);
	return (1);
}
