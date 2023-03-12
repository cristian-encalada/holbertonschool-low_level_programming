#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 * Int range values (4 bytes) -2,147,483,648 to 2,147,483,647
 */
void print_number(int n)
{
	int c; /* counter and divider */

	if (n < 0)
	{
		_putchar('-');
	}
	for (c = 1000000000; c > 0; c = c / 10)
	{
		if (n / c)
		{
			if ((n / c) % 10 < 0)
				_putchar(-(n / c % 10) + '0');
			else
				_putchar((n / c % 10) + '0');
		}
		else if (n / c == 0 && c == 1)
		{
			_putchar(n / c % 10 + '0');
		}
	}
}
