#include "main.h"
/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @s: input variable - char type working as a string
* Return: void.
*/
void rev_string(char *s)
{
	int count = 0, reverse;

	while (*s != '\0')
	{
		count++;
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	for (reverse = count - 1; reverse >= 0; reverse--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
