#include<stdio.h>
/**
* main -Entry point
* Program that prints all possible combinations of single-digit numbers.
* Numbers must be separated by ,, followed by a space
* Numbers should be printed in ascending order
* only use the putchar function
* use putchar four times maximum
* not allowed to use any variable of type char
* Return: Always 0 (Success)
*
* NOTE: it's possible to convert an integer to a character
* inside the putchar function
* by adding '0' to the integer (ascii code)
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
		putchar(',');
		putchar(' ');
		}
	x++;
	}
	putchar('\n');
	return (0);
}
