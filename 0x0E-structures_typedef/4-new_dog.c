#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - Returns length of string
 * @s: String to evalauate
 *
 * Return: The Length
 */
int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * _strcpy- Copies the string pointed
 * @dest: Pointer to buffer
 * @src: String to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, j;

	for(a = 0; src[a] != '\0'; a++)
	;

	for (j = 0; j < a; j++)
	{
	dest[j] = src [j];
	}
	dest[a] = '\0';

	return (dest);
}



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
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
	return (NULL);

	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}

	new_dog->age = age;
	return (new_dog);
}
