#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name: input name to be printed
 * @f: function pointer to print a name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(1);

	f(name);
}
