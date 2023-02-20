#include<stdio.h>
/**
* main -Entry point
* Program that prints all possible combinations of two digits.
* Numbers must be separated by ,, followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order
* only use the putchar function
* You can only use the putchar function
* use putchar five times maximum
* not allowed to use any variable of type char
* Return: Always 0 (Success)
*/
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 8; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 9; dig2++)
		{
			putchar(dig1 + '0');
			putchar(dig2 + '0');
			if (dig1 + dig2 < 15)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
