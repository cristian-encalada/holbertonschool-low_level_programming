#include "main.h"
#include <stdio.h>
/**
* print_to_98 - function that prints all natural numbers from n to 98
* @input: input value
*/
void print_to_98(int input)
{
	if (input > 98)
	{
		while (input > 98)
		{
			printf("%d, ", input);
			input--;
		}
		printf("%d\n", 98);
	}
	else
	{
		while (input < 98)
		{
			printf("%d, ", input);
			input++;
		}
		printf("%d\n", 98);
	}
}
