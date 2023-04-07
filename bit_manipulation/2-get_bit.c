#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: number in base 10
 * @index: is the index, starting from 0 of the bit to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 0)
	{
		return (get_bit(n >> 1, index - 1));
	}
	if (index == 0)
		bit = n & 1;
	else
		bit = (-1);
	return (bit);
}
