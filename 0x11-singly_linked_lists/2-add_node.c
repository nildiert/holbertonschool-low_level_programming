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
 * *add_node - check the code for Holberton School students.
 *
 * @head: The structure that receives
 * @str: The structure that receives
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new)
	{
		new->str = strdup(str);
		if (!(new->str))
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(new->str);
		new->next = (*head);
		*head = new;
	}
	else
	{
		return (NULL);
	}

	return (new);
}
