#include "lists.h"

/**
 * dlistint_len - check the code for Holberton School students.
 * @h: list
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
