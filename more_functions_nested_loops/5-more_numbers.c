#include "main.h"
/**
* more_numbers - function that prints 10 times the numbers,
* from 0 to 14, followed by a new line.
* Return: 0 if no errors
*/
void more_numbers(void)
{
	int num, counter = 0, i = 0;
	char x[] = "1011121314";

	while (counter < 10)
	{
		for (num = 0; num <= 9; num++)
		{
			_putchar(num + '0');
		}
		for (num = 0; num <= 9; num++)
		{
			_putchar(x[i]);
			i++;
			if (i > 9)
			i = 0;
		}
		_putchar('\n');
		counter++;
	}
}
