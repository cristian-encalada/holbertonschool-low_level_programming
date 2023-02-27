#include "main.h"
/**
* swap_int - function that swaps the values of two integers
* @a: input variable 1
* @b: input variable 2
*/
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
