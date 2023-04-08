#include "main.h"

int count_bits(int n);
/**
 * flip_bits -  get number of bits needed to flip 2 numbers
 * @n: number 1 (base 10)
 * @m: number 2 (base 10)
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}

/**
 * count_bits - count bits set to 1
 * @n: binary number
 * Return: the number of bits set to 1
 */
int count_bits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= n - 1;
	}

	return (count);
}
