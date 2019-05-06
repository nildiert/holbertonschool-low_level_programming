#include "lists.h"
/**
 * listint_len - Print the list of a single list
 * @h: The pointer of the list
 *
 * Return: The number of elements in the list
 */


size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
