#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line
* @str: input variable - char type working as a string
* Return: an integer after the iteration.
*/
void puts_half(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	str = str - count / 2;
	for (count = (count - 1) / 2; count > 0; count--)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
