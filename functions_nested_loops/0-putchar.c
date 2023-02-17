#include "main.h"
/**
* main -Entry point
* Program that prints _putchar, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	char print[] = "_putchar";
	char x = print[i];

	for (i = 0; i <= 7; i++)
	{
		_putchar(x);
		x = print[i + 1];
	}
	_putchar('\n');
	return (0);
}
