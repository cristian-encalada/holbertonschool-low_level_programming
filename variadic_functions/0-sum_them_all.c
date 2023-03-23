#include "variadic_functions.h"

/**
 * sum_them_all - function that sums of all its parameters
 * @n: counter (number of parameters)
 * Return: sum of all function parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_all;
	unsigned int sum, i;

	va_start(sum_all, n); /* Initialize the argument list */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(sum_all, int); /* Get the next argument value */

	va_end(sum_all); /* Clean up */

	return (sum);
}
