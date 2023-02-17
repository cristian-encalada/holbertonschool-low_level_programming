#include "main.h"
/**
 * print_sign - checks for alphabetic character.
 * @n: Returns 0 if the input is 0
 * @n: Returns + if the input is greater than 0.
 * @n: Returns - if the input is less than 0
 * Return: 0 at the end if no errors
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('+');
			return (1);
		}
	}
	return (0);
}
