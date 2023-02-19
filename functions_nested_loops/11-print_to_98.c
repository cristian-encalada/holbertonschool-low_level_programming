#include <stdio.h>
#include "main.h"
/**
* print_to_98 - function that prints all natural numbers from n to 98
* followed by a new line
* @n: input value
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n <= 98)
	{
		if (n < 0)
		_putchar('-');
		if (((n / 10)) >= 1)
		_putchar((n / 10) + '0');
		if (((n / 10)) < 0)
		_putchar(((n / 10) * (-1)) + '0');
		if (n <= 0)
		_putchar(((n % 10) * (-1)) + '0');
		else
		_putchar(n % 10 + '0');
	_putchar(',');
	_putchar(' ');
	n++;
	}
	_putchar('\n');
	}
	else
	{
	while (n >= 98)
	{
		if (((n / 100)) >= 1)
		_putchar((n / 100) + '0');
		if (((n / 10)) >= 0)
		{
			if (((n / 10)) > 9)
			_putchar(((n / 10) - 10) + '0');
		else
		_putchar((n / 10) + '0');
		}
	_putchar(n % 10 + '0');
	_putchar(',');
	_putchar(' ');
	n--;
	}
	_putchar('\n');
	}
}
