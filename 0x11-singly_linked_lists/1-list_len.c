#include "lists.h"
/**
 * list_len - check the code for Holberton School students.
 *
 * @h: The structure that receives
 *
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return ((h) ? 0 : i);
}
