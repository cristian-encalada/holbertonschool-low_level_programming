#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: 0 if no errors
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	if (num > '9')
		_putchar('\n');
}
