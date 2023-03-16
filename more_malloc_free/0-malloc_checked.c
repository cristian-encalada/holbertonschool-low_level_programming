#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc,
 * @b: input - # of int bytes to be allocated
 * Return: if malloc fails, status value = 98
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	/* malloc(b) takes the sizeof according to the input (int, char, etc)*/
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
