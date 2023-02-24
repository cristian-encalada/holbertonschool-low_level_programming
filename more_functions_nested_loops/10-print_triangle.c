#include "main.h"
/**
* print_triangle -  function that prints a triangle, followed by a new line.
* @size: is the size of the triangle.
* If size is 0 or less, the function should print only a new line
* Return: 0 if no errors
*/
void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = (size - 1); i >= 0; i--)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
		for (x = 0; x <= size / 2; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
