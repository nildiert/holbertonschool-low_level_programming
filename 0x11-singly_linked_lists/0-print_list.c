#include "lists.h"
/**
 * print_list - check the code for Holberton School students.
 *
 * @h: The structure that receives
 *
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %p\n", 0, h->str);
		h = h->next;
		i++;
	}
	return ((h) ? 0 : i);
}
