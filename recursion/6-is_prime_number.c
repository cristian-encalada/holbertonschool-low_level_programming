#include "main.h"
/**
 * verify_prime - auxiliar function to verify using recursion
 * @num: number to verify (input)
 * @aux: aux parameter
 * Return: 0 = not a prime, 1 = is a prime
*/
int verify_prime(int num, int aux)
{
	if (num < 2)
		return (0);
	if (num == aux)
		return (1);
	if (num % aux == 0)
		return (0);
	return (verify_prime(num, aux + 1));
}
/**
 * is_prime_number - function to verify prime numbers.
 * @n: input number
 * Return: 0 = not a prime, 1 = is a prime
 */
int is_prime_number(int n)
{
	return (verify_prime(n, 2));
}
