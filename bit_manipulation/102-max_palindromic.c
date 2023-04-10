#include <stdio.h>

/**
 * main - Find the largest palindromic number
 *	made from the product of two 3-digit numbers
 * @n: number to be verified (product)
 * Return: 0 to indicate success
 */

int max_palindromic(unsigned int n);

int main(void)
{
	unsigned int n1, n2, max = 0, prod;

	for (n1 = 100; n1 <= 999; n1++)
	{
		for (n2 = 100; n2 <= 999; n2++)
		{
		unsigned int prod = n1 * n2;

		if (max_palindromic(prod) && prod > max)
			max = prod;
		}
	}
	printf("%u\n", max);
	return (0);
}
/**
 * max_palindromic - determine if a given number is a palindrome
 * @n: number to be verified
 * Return: The number if it's palindrome
 */
int max_palindromic(unsigned int n)
{
	unsigned int reversed_num = 0, temp = n;

	while (temp)
	{
		reversed_num = 10 * reversed_num + (temp % 10);
		temp /= 10;
	}
	return (reversed_num == n);
}
