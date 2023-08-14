#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Description: Creates dog structure and allocates memory
 * Return: Pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	if (name == NULL || owner == NULL)
	{
	return (NULL);

	}

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
	return (NULL);
	}

	new_d->name = strdup(name);
	if (new_d->name == NULL)
	{
	free(new_d);
	return (NULL);
	}

	new_d->owner = strdup(owner);
	if (new_d->owner == NULL)
	{
	free(new_d->name);
	free(new_d);
	return (NULL);
	}

	new_d->age = age;
	return (new_d);
}
