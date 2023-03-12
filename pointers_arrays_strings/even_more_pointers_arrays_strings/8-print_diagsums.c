#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *			of a square matrix of integers
 * @a: input matrix of integers
 * @size: size of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row; /** counts for rows and columns*/
	int diag1 = 0, diag2 = 0; /** variables that store the sum of diagonals*/

	for (row = 0; row < size; row++)
	{
		diag1 = diag1 + a[row * size + row];
		diag2 = diag2 + a[row * size + (size - row - 1)];
	}
	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
