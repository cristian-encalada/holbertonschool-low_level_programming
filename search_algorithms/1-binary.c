#include "search_algos.h"

void print_current_value(size_t size, size_t index);
/**
 * binary_search - Search for a value in an array of integers
 *                  using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *          Assume that array will be sorted in ascending order
 *          Assume that value won’t appear more than once in array
 * Return: The first index where value is located
 *          If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, mid;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);			/* Value found, return the index */
		else if (array[mid] < value)
			left = mid + 1;			/* Value is in the right half */
		else
			right = mid - 1;		/* Value is in the left half */
	}

	return (-1);	/* Value not found */
}

/**
 * print_current_value - Print the current value in the search
 * @index: current index
 * @value: Value to search for
 *
 * Return: Void
 */
void print_current_value(size_t index, size_t value)
{
	printf("Value checked array[%ld] = [%ld]\n", index, value);
}
