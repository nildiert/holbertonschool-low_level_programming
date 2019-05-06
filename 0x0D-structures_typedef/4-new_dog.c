#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *_strdup - Function that copy an array
 * @str: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ar;

	if (!str)
		return (NULL);
	while (str[size])
		size++;
	ar = malloc(size * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = str[i];
	ar[i] = '\0';
	return (ar);
}
/**
 * new_dog - check the code for Holberton School students.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the new dog
 *
 * Return: Always 0.
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	if (name)
	{
		new_dog->name = _strdup(name);

		if (!(new_dog->name))
		{
			free(new_dog);
		}
	}
	new_dog->age = age;
	if (owner)
	{
		new_dog->owner = _strdup(owner);
		if (!new_dog->owner)
		{
			if (new_dog->name != 0)
			{
				free(new_dog->name);
			}
			free(new_dog);
		}
	}
	return (new_dog);
}
