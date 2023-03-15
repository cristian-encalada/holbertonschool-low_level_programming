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

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
