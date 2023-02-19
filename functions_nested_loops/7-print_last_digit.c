#include "main.h"
/**
* print_last_digit - function that prints the last digit of a number..
* @input: input value
* Return: 0 at the end if no errors
*/
int print_last_digit(int input)
{
	int last;

	last = (input % 10);
	if (last < 0)
	{
		last = last * (-1);
	}
	_putchar(last + '0');
	return (last);
}
