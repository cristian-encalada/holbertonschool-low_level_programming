#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number in base 10
 * @index: is the index, starting from 0 of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index); /* Clear the bit at the given index */

	return (1);
}
