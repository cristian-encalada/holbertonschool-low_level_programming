#include<stdio.h>
/**
* main -Entry point
* Program that prints the alphabet in lowercase, followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		printf("%c", abc);
/** if condition checks the simbol {, because it's after z (ascii code)*/
	if (abc == '{')
		printf("\n");
	return (0);
}
