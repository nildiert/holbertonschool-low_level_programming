#include "lists.h"
/**
 * pop_listint - Print the list of a single list
 * @head: The pointer of the list
 *
 * Return: The number of elements in the list
 */


int pop_listint(listint_t **head)
{
	listint_t *temporal = *head;
	int n;

	if (!*head)
		return (0);
	temporal = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temporal;
	return (n);
}
