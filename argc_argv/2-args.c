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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	(void) argc;
	return (0);
}
