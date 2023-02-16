#include<stdio.h>
/**
* main -Entry point
* Program that prints all single digit numbers of base 10 starting from 0,
* followed by a new line (using putchar function)
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
/** if condition checks the simbol :, because it's after 9 (ascii code)*/
	if (num == ':')
		putchar('\n');
	return (0);
}
