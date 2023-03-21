#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be used
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element
 *	If no element matches, return -1
 *	If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0, first_index;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; size > 0; size--)
	{
		cmp(array[index]);
		if (cmp(array[index]) != 0)
		{
			first_index = index;
			break; /* Stop searching once 1st value found */
		}
		index++;
	}
	return (first_index);
}
