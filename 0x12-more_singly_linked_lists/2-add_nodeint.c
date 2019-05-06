#include "lists.h"
/**
 * *add_nodeint - Print the list of a single list
 * @n: The variable of int type that receives
 * @head: The pointer of the list
 *
 * Return: The number of elements in the list
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(head));
	listint_t *copy = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	else
	{
		new->next = copy;
		*head = new;
	}
	return (*head);
}
