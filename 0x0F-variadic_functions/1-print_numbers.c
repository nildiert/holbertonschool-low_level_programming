#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * @separator: Brings the separator
 * @n: Numbers of arguments
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int count;

	va_start(arguments, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(arguments, int));
		if (separator != NULL)

		if ((count + 1) != n)
		{
			printf("%s", separator);
		}
	}
	va_end(arguments);
	printf("\n");
}
