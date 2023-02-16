#include<stdio.h>
/**
* main -Entry point
* Program that prints all numbers of base 16 in lowercase,
* followed by a new line.
* using putchar function
* Return: Always 0 (Success)
*/
int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	if (hex > 'f')
		putchar('\n');
	return (0);
}
