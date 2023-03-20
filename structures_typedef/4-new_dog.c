#include "dog.h"
#include <stdlib.h>

/**
* _strlen - function that finds the length of a string
* @s: input string
* Return: Length of string (not including /0)
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
/**
 * new_dog - function that creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 * Return: A new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	return (new_dog);
}
