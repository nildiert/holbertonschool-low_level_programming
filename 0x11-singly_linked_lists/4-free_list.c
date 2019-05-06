#include "lists.h"

/**
 * free_list - check the code for Holberton School students.
 *
 * @head: The structure that receives
 *
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *next_element;
	(void)next_element;

	while (head)
	{
		free(head->str);
		next_element = head->next;
		free(head);
		head = next_element;
	}
}
