#include<stdio.h>
/**
* main -Entry point
* Program that prints all single digit numbers of base 10 starting from 0,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		printf("%c", num);
/** if condition checks the simbol :, because it's after 9 (ascii code)*/
	if (num == ':')
		printf("\n");
	return (0);
}
