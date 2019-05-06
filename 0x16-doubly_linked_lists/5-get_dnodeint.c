#include "lists.h"

/**
 * *get_dnodeint_at_index - check the code for Holberton School students.
 * @head: list
 * @index: New element
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *copy;
	unsigned int count = 0;

	if (!head)
		return (0);
	copy = head;
	while (count < index)
	{
		if (!copy->next)
			return (NULL);
		copy = copy->next;
		count++;
	}
	return (copy);
}
