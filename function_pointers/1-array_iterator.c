#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 *		on each element of an array
 * @array: array to be used
 * @size: size of the array
 * @action:  pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		exit(1);

	for (; size > 0; size--)
	{
		action(*array);
		array++;
	}
}
