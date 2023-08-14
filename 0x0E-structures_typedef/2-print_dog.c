#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints all attributes of poppy
 * @d: Dog struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name)!= NULL ? d->name : "(nil");
		printf("Age: %6f\n", d->age);
		printf("Owner: %s\n", (d->owner)!= NULL ? d->owner : "(nil");
	}
}

