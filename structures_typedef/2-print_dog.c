#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0) /* Check if d is not NULL */
	{
		if (name == NULL)
			d->name = "nil";
		d->name = name;
		d->age = age;
		if (name == NULL)
			d->owner = "nil";
		d->owner = owner;
	}
}

/**
 * print_dog - print the items of dog struct
 * @d: dog structure
 */
void print_dog(struct dog *d)
{
	if (d != 0) /* Check if d is not NULL */
	{
		printf("%s\n", (*d).name);
		printf("%f\n", (*d).age);
		printf("%s\n", (*d).owner);
	}
}
