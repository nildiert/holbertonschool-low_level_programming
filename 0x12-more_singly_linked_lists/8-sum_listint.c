#include "lists.h"
/**
 * sum_listint - Print the list of a single list
 * @head: The pointer of the list
 *
 * Return: The number of elements in the list
 */


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *copy = head;

	if (!copy)
		return (0);
	while (copy)
	{
		sum += copy->n;
		copy = copy->next;
	}
	return (sum);
}
