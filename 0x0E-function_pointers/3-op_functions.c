#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - check if a number is equal to 98
 * @a: the integer to check
 * @b: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - check if a number is equal to 98
 * @a: the integer to check
 * @b: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - check if a number is equal to 98
 * @a: the integer to check
 * @b: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - check if a number is equal to 98
 * @a: the integer to check
 * @b: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - check if a number is equal to 98
 * @a: the integer to check
 * @b: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
