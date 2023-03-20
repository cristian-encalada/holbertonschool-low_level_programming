#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated by dog structure
 * @d: previous dog struct used
 * Return: nothing
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
