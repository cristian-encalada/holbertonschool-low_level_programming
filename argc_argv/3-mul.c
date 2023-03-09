#include <stdlib.h>
#include <stdio.h>
/**
 * main - Program that multiplies two numbers..
 * @argc: number of parameters
 * @argv: prints an array of arguments passed to the cli
 * Return: 0 if no errors
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		(void) argv;
	}
	return (0);
}
