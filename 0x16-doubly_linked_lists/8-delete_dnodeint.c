#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code for Holberton School students.
 * @head: list
 * @index: Id of the node
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *copy;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	if (!head)
		return (-1);
	copy = *head;
	if (index == 0)
	{
		*head = copy->next;
		if (*head)
			(*head)->prev = NULL;
		free(copy);
		return (1);
	}
	while (count < index)
	{
		if (!copy)
			return (-1);
		copy = copy->next;
		count++;
	}
	copy->prev->next = copy->next;
	if (copy->next)
		copy->next->prev = copy->prev;
	free(copy);
	return (1);
}
