#include<stdio.h>
/**
* main -Entry point
* Program that prints all possible combinations of two two-digit numbers.
* The numbers should range from 0 to 99
* All numbers should be printed with two digits.(eg. 01, 02)
* The combination of numbers must be separated by comma, followed by a space
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order
* 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
* only use the putchar function
* You can only use the putchar function
* use putchar five times maximum
* not allowed to use any variable of type char
* Return: Always 0 (Success)
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				if (num1 + num2 <= 197)
				{
					putchar(' ');
				}
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				if (num1 + num2 < 197)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
