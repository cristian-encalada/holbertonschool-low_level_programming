#include "main.h"
/**
* _puts - function that swaps the values of two integers
* @str: input variable - char type working as a string
* Return: an integer after the iteration.
*/
void _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	_putchar('\n');
}
