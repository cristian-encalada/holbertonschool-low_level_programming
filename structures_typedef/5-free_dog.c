#include "dog.h"
#include <stdlib.h>

/**
* _strlen - finds the length of a string
* @s: input string
* Return: length of a string
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
 * free_dog - frees memory allocated by dog structure
 * @d: dog array
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	int i = 0;
	int len = _strlen(d);

	for (i = 0; i < len; i++)
		free(d[i]);
	free(d);
}
