#include "lists.h"
/**
 * _strlen - Swap the value of 2 variables
 * @s: The character that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;
	return (count);
}

/**
 * *add_node_end - check the code for Holberton School students.
 *
 * @head: The structure that receives
 * @str: The structure that receives
 *
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *copy = *head;

	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (copy->next)
	{
		copy  = copy->next;
	}
	copy->next = new;
	return (new);
}
