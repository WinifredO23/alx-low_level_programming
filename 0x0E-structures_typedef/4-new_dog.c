#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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

	for (a = 0; src[a] != '\0'; a++)
	;

	for (j = 0; j < a; j++)
	{
	dest[j] = src[j];
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
	int a1, a2;

	a1 = _strlen(name);
	a2 = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (a1 + 1));
	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (a2 + 1));
	if (new_dog->owner == NULL)
	{
	free(new_dog);
	free(new_dog->name);
	return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
