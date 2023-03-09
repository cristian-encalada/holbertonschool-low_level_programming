#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of parameters
 * @argv: prints an array of arguments passed to the cli
 * Return: 0 if no errors
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
