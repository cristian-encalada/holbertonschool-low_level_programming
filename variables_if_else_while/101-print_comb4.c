#include<stdio.h>
/**
* main -Entry point
* Program that prints all possible combinations of three digits.
* Numbers must be separated by ,, followed by a space
* The three digits must be different
* 012, 120, 102, 021, 201, 210 are considered the same combination
* of the three digits 0, 1 and 2
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order
* only use the putchar function
* You can only use the putchar function
* use putchar five times maximum
* not allowed to use any variable of type char
* Return: Always 0 (Success)
*/
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 < 8; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 9; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 10; dig3++)
			{
				if (dig1 != dig2 && dig1 != dig3 && dig2 != dig3)
				{
					putchar(dig1 + '0');
					putchar(dig2 + '0');
					putchar(dig3 + '0');
					if (dig3 + dig2 + dig1 < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
