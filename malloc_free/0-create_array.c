#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 *		and initializes it with a specific char
 * @size: input size of the array
 * @c: char to use in the initialization
 * Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array, *aux_pointer;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	aux_pointer = array;
	for (i = 0; i < size; i++)
		aux_pointer[i] = c;
	return (array);
}
