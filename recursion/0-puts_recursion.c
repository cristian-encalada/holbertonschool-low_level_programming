#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: input string
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
