#include "main.h"
/**
* print_triangle -  function that prints a triangle, followed by a new line.
* @size: is the size of the triangle.
* If size is 0 or less, the function should print only a new line
* Return: 0 if no errors
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			_putchar (' ');
		}
			for (k = 0; k < size - j + 1; k++)
			{
				_putchar ('#');
			}
		 _putchar ('\n');
	}
}
