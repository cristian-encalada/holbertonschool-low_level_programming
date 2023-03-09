#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of parameters
 * @argv: prints an array of arguments passed to the cli
 * Return: 0 if no errors
*/
int main(int argc, char *argv[])
{

	printf("%s\n", argv[0]);
	(void) argc;
	return (0);
}
