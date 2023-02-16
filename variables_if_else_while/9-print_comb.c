#include<stdio.h>
/**
* main -Entry point
* Program that prints all possible combinations of single-digit numbers,
* followed by a new line (using putchar function)
* Numbers must be separated by , followed by a space
* Numbers should be printed in ascending order
* only use putchar four times maximum
* not allowed to use any variable of type char
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
/** if condition checks the simbol :, because it's after 9 (ascii code)*/
	if (num == ':')
	{
		putchar('\n');
	}
	return (0);
}
