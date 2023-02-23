#include "main.h"
/**
* print_line - function that draws a straight line in the terminal.
* @n: is the number of times the character _ should be printed.
* Return: 0 if no errors
*/
void print_line(int n)
{
	int compare;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (compare = n; compare > 0; compare--)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
