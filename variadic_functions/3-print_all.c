#include "variadic_functions.h"
/**
 * print_all - prints different variables types
 * @format: list of types of arguments
*/
void print_all(const char * const format, ...)
{
	va_list all;
	int num = 0, c;
	char *str = NULL;
	double f = 0.0;
	const char *p = format; /* aux ptr */

	va_start(all, format); /* Initialize the argument list */
	while (format != NULL && *p != '\0')
	{
		switch (*p)
		{
		case 'c':
			c = va_arg(all, int);
			printf("%c", c);
			break;
		case 'i':
			num = va_arg(all, int);
			printf("%d", num);
			break;
		case 'f':
			f = va_arg(all, double);
			printf("%f", f);
			break;
		case 's':
			str = va_arg(all, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			break;
		}
		if ((*p == 'c' || *p == 'i' || *p == 'f' || *p == 's') && *(p + 1) != '\0')
			printf(", ");
		p++;
	}
	printf("\n");
	va_end(all); /* Clean up */
}
