#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
listint_t *add_nodeint(listint_t **head, const int n);
/**
 * *insert_nodeint_at_index - Print the list of a single list
 * @head: The pointer of the list
 * @idx: The position of the insert
 * @n: The number to insert
 *
 * Return: The number of elements in the list
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *copy;
	listint_t *new = malloc(sizeof(*head));
	listint_t *current;
	unsigned int i = 0;

	if (!head)
		return (0);
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{

		new->next = NULL;
		*head = new;
		return (new);
	}
	copy = *head;
	if (idx == 0)
		return (add_nodeint(head, n));
	while (i < (idx - 1))
	{
		copy = copy->next;
		i++;
		if (i < (idx - 1) && !copy)
			return (NULL);
	}
	if (copy->next == NULL)
		return (add_nodeint_end(&copy, n));
	current = copy;
	new->next = current->next;
	new->n = n;
	current->next = new;
	return (new);

}

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
