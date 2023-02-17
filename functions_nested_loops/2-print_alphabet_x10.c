#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 if no errors
 */
void print_alphabet_x10(void)
{
	char abc;
	int counter = 9;
	
	while (counter >= 0)
	{
	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	counter --;
	if (abc > 'z')
		_putchar('\n');
	}
}
