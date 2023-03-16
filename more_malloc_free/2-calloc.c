#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory using malloc and initialize to 0
 * @nmemb: # of elements to be allocated
 * @size: input - # of int bytes to be allocated
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	/** Initializing elements to 0*/
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
