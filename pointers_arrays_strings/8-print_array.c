#include "main.h"
#include <stdio.h>
/**
* print_array - function that prints n elements of an array of integers,
* followed by a new line.
* @a: array of integers
* @n: # of elements to be displayed
* Return: an integer after the iteration.
*/
void print_array(int *a, int n)
{
	for (; n > 0; n--)
	{
		if (*a != '\0')
		{
		printf("%d", *a);
		a++;
		}
		if (n > 1)
		printf(", ");
	}
	printf("\n");
}
