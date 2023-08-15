#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 * Description: Function releases the memory allocated for the dynamically
 * frees the memory allocated for the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{

	free(d->name);
	free(d->owner);

	free(d);
	}
}
