#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Program that adds positive numbers.
 * @argc: number of parameters
 * @argv: prints an array of arguments passed to the cli
 * Return: 0 if no errors
*/
int main(int argc, char *argv[])
{
	int add = 0, i, j;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error %d\n", isdigit(argv[i][j]));
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
