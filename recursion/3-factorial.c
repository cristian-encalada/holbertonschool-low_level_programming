#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: input number
 * Return: size of the string (int)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
