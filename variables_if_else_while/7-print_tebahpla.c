#include<stdio.h>
/**
* main -Entry point
* Program that prints the alphabet in lowercase in reverse order,
* followed by a new line using only putchar function
* Return: Always 0 (Success)
*/
int main(void)
{
	char abc = 'z';

	for (abc = 'z'; abc <= 'a'; abc--)
		putchar(abc);
/** if condition checks the simbol `, because it's after z (ascii code)*/
	if (abc < 'a')
		putchar('\n');
	return (0);
}
