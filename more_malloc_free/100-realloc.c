#include "main.h"
#include <stdlib.h>
/**
 * _realloc - allocates memory using malloc and initialize to 0
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: If new_size == old_size return ptr
 *	If new_size != 0, and ptr is not NULL - return NULL
 *	Else - A pointer to the reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *reallocated;
	char *ptr_cp, *aux;
	unsigned int i;


	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		reallocated = malloc(new_size);
		if (reallocated == NULL)
			return (NULL);
		return (reallocated);
	}
	ptr_cp = ptr;
	reallocated = malloc(sizeof(*ptr_cp) * new_size);

	if (reallocated == NULL)
	{
		free(ptr);
		return (NULL);
	}

	aux = reallocated;

	for (i = 0; i < new_size && i < old_size; i++)
		aux[i] = *ptr_cp++;

	free(ptr);
	return (reallocated);
}
