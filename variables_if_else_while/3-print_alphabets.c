#include<stdio.h>
/**
* main -Entry point
* Program that prints the alphabet in lowercase,
* and then in uppercase, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	char abc;
	char ABC;

	for (abc = 'a'; abc <= 'z'; abc++)
		printf("%c", abc);
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
		printf("%c", ABC);
/** if condition checks the simbol [, because it's after Z (ascii code)*/
	if (ABC == '[')
		printf("\n");
	return (0);
}
