#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - check the code for Holberton School students.
 * @d: Dog
 *
 * Return: Always 0.
 */


void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
