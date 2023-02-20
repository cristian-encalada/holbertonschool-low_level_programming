#include "main.h"
/**
* times_table - function that prints the 9 times table, starting with 0
* Return: 0 at the end if no errors
*/
void times_table(void)
{
	int i, j, n = 9, last_digit, other_digit;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= n; j++)
	{
	last_digit = ((i * j) % 10);
	other_digit = ((i * j) / 10);
		if (other_digit > 0)
		_putchar(other_digit + '0');
		else
		_putchar(' ');
		_putchar(last_digit + '0');
		if (j < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
