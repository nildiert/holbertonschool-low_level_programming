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
