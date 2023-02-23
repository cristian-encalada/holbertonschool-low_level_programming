#include "main.h"
/**
* print_square - function that prints a square, followed by a new line
* @size: is the size of the square
* Use the character # to print the square
* If size is 0 or less, the function should print only a new line
* Return: 0 if no errors
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
