#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal
* @n: is the number of times the character _ should be printed.
* Return: 0 if no errors
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= (n - 1); ++i)
		{
			for (j = 0; j <= i; ++j)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
