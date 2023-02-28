#include "main.h"
/**
* puts2 - unction that prints every other character of a string
* starting with the first character, followed by a new line.
* @str: input variable - char type working as a string
* Return: an integer after the iteration.
*/
void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
		_putchar(*str);
		str++;
		count++;
	}
	_putchar('\n');
}
