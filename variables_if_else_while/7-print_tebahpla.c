#include<stdio.h>
/**
* main -Entry point
* Program that prints the alphabet in lowercase, followed by a new line
* inverse order and using putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	char xyz;

	for (xyz = 'z'; xyz >= 'a'; xyz--)
		putchar(xyz);
	if (xyz < 'a')
		putchar('\n');
	return (0);
}
