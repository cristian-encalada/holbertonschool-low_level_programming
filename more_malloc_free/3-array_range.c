#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: min limit
 * @max: max limit
 * Return: If nmemb or size is 0, then _calloc returns NULL
*/
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	/** Initializing int values*/
	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
