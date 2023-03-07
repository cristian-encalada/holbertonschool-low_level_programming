#include "main.h"
/**
 * is_prime_number - function that verifies if a # is prime
 * @n: input number
 * Return: 1 = prime number; 0 = not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (1);
	else
		return (is_prime_number(n - 1));
}
