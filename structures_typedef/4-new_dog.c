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
* *_strcpy - copies from src to des
* @src: input string (source to be copied)
* @dest: output string (destination array)
* Return: the copied array (dest)
*/
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (aux);
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

	if (name == NULL || owner == NULL || age < 0)
		exit(1);
	/* Allocating memory for new_dog items */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		exit(1);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		exit(1);
	}
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		exit(1);
	}
	/* Initializing values and cp values of name and owner */
	new_dog->age = age;
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = _strcpy(new_dog->owner, owner);
	return (new_dog);
}
