#include "lists.h"

/**
 * *insert_dnodeint_at_index - check the code for Holberton School students.
 * @h: list
 * @idx: Id of the node
 * @n: Element of the list
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *copy;
	dlistint_t *new;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new->n = n;
	if (!*h)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	copy = *h;
	while (count < idx)
	{
		if (count + 1 == idx && !copy->next)
			return (add_dnodeint_end(h, n));
		if (!copy->next && idx - 1 != count)
			return (NULL);
		copy = copy->next;
		count++;
	}
	new->next = copy;
	new->prev = copy->prev;
	copy->prev->next = new;
	copy->prev = new;

	return (new);
}
