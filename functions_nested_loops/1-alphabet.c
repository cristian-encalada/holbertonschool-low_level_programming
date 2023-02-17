#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 if no errors
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	if (abc > 'z')
		_putchar('\n');
}
