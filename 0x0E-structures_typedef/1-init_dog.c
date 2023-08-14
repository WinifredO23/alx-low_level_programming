#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Intialize structure
 * @d: Dog structure
 * @name: Name of dog
 * @age: Age
 * @owner: Owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
