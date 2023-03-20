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
		d->name = name;
		d->age = age;
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
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
		printf("Owner: %s\n", (*d).owner);
	}
}
