#include "main.h"
/**
 * is_perferct_root - verify if a  number is a perferct root
 * @n: number to verify (input)
 * @aux: aux parameter to increment and do the comparison
*/
int is_perferct_root(int n, int aux)
{
	if (n == aux * aux)
		return (n);
	if (n < aux * aux)
		return (-1);
	else
		return (is_perferct_root(n, aux + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: input number
 * Return: sqrt of a integer
 */
int _sqrt_recursion(int n)
{
	return (is_perferct_root(n, 1));
}
