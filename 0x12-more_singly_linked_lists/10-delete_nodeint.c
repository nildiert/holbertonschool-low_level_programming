#include "lists.h"
/**
 * *get_nodeint_at_index - Print the list of a single list
 * @head: The pointer of the list
 * @index: The The number in the list
 *
 * Return: The number of elements in the list
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *copy = head;

	if (!copy)
		return (NULL);
	while (index != i && copy)
	{
		copy = copy->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (copy);
}

/**
 * delete_nodeint_at_index - Print the list of a single list
 * @head: The pointer of the list
 * @index: The The number in the list
 *
 * Return: The number of elements in the list
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *after;
	listint_t *delete;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		after = get_nodeint_at_index(*head, index);
		*head = after->next;
		free(after);
		return (1);
	}
	after = get_nodeint_at_index(*head, index - 1);
	if (after == NULL || after->next == NULL)
		return (-1);
	if ((after->next)->next == NULL)
	{
		delete = after->next;
		free(delete);
		after->next = NULL;
		return (1);
	}
	delete = after->next;
	after->next = delete->next;
	free(delete);
	return (1);
}
