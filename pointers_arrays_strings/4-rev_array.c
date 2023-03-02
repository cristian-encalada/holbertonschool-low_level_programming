#include "main.h"
/**
* reverse_array - function that reverses the content of an array of integers
* @a: array of integers
* @n: number of elements to swap
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0, aux; /** aux stores the value of a [i] while swapping*/

	while (i > j)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
		j++;
		i--;
	}
}
