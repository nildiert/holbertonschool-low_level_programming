#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 *
 * @separator: SEparator that receives
 * @n: Numbers of arguments that receives
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int count;
	char *string_pointer;

	va_start(arguments, n);
	for (count = 0; count < n; count++)
	{
		string_pointer = va_arg(arguments, char *);
		if (string_pointer)
			printf("%s", string_pointer);
		else
			printf("%p", string_pointer);
		if (separator != NULL && count < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
