#include "lists.h"

/**
 * *add_dnodeint_end - check the code for Holberton School students.
 * @head: list
 * @n: New element
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new;
	dlistint_t *copy;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	copy = *head;
	while (copy->next)
		copy = copy->next;
	copy->next = new;
	new->prev = copy;

	return (new);
}
