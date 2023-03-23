#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int)); /* Print next arg value */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers); /* Clean up */
}
