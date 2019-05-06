#include "lists.h"

/**
 * sum_dlistint - check the code for Holberton School students.
 * @head: list
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *copy;
	int sum = 0;

	if (!head)
		return (0);
	copy = head;
	while (copy->next)
	{
		sum += copy->n;
		copy = copy->next;
	}
	sum += copy->n;
	return (sum);
}
