#include "lists.h"
/**
 * print_listint - Print the list of a single list
 * @h: The pointer of the list
 *
 * Return: The number of elements in the list
 */


size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
