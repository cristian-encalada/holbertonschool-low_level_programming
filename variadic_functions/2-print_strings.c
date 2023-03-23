#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between strings
 * @n: number of arguments passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings); /* Clean up */
}
