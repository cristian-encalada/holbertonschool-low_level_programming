#include "main.h"
/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @s: input variable - char type working as a string
* Return: void.
*/
void print_rev(char *s)
{
	int count = 0, reverse;

	while (*s != '\0')
	{
		s++;
		count++;
		reverse = count;
	}
	s--;
	while (reverse >= 0)
	{
		_putchar(*s);
		reverse--;
		s--;
	}
	_putchar('\n');
}
