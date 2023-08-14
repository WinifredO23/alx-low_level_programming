#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - Atributes of poppy
 * Description: Dog atrributes
 * @name: Name of Poppy
 * @age: Age
 * @owner: Owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
