#include "variadic_functions.h"

/**
 * print_all - check the code for Holberton School students.
 *
 * @format: Format of the string
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *pointer;
	va_list arguments;

	va_start(arguments, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arguments, int));
			break;
		case 'i':
			printf("%i", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", va_arg(arguments, double));
			break;
		case 's':
			pointer = va_arg(arguments, char *);
			if (!pointer)
			{
				printf("%p", pointer);
				break;
			}
			printf("%s", pointer);
			break;
		default:
			++i;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arguments);
}
