#include "main.h"
/**
* more_numbers - function that prints 10 times the numbers,
* from 0 to 14, followed by a new line.
* Return: 0 if no errors
*/
void more_numbers(void)
{
	int num, counter = 0;

	while (counter < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
				_putchar(num + '0');
		}
		_putchar('\n');
		counter++;
	}
}
