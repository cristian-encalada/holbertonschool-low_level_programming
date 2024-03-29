#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: structure dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0) /* Check if d is not NULL */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
