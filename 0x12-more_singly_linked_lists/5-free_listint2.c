#include "lists.h"
/**
 * free_listint2 - Print the list of a single list
 * @head: The pointer of the list
 *
 * Return: The number of elements in the list
 */


void free_listint2(listint_t **head)
{
	listint_t *delete;

	if (!head)
		return;
	while (*head)
	{
		delete = (*head)->next;
		free(*head);
		*head = delete;
	}
}
