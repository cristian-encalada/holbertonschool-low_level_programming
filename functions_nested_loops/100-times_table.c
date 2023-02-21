#include "main.h"
/**
* print_times_table - function that prints the n times table, starting with 0
* If n is greater than 15 or less than 0 the function should not print anything
* @input: stores the input passed to the function from main.c
* Return: 0 at the end if no errors
*/
void print_times_table(int input)
{
	int i, j, n, unit, ten, hundred;

	n = input;
	if ((n >= 0) && (n <= 15))
	{
	for (i = 0; i < input + 1; i++)
	{
	for (j = 0; j <= n; j++)
	{
	unit = ((i * j) % 10);
	ten = ((i * j) / 10);
	hundred = ((i * j) / 100);
		if (hundred > 0)
		_putchar(hundred + '0');
		else
			if ((hundred <= 0) && (j > 0))
			_putchar(' ');
		if ((ten > 0) && (ten <= 9))
		_putchar(ten + '0');
		if (ten > 9)
		_putchar((ten - 10) + '0');
		else
			if ((ten <= 0) && (j > 0))
			_putchar(' ');
		_putchar(unit + '0');
		if (j < input)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
	}
	}
}
