#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - program that prints the minimum number of coins
 * If the number is negative, print 0, followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * @argc: number of parameters
 * @argv: prints an array of arguments passed to the cli
 * Return: argc !=2 -> return 1
*/
int main(int argc, char *argv[])
{
	int min_change = 0, i, rest = 0, money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
		if (!isdigit(argv[1][i]))
		{
			printf("0\n");
			return (1);
		} /** Logic to obtain the min number of coins*/
	money = atoi(argv[1]);
	if (money >= 25)
	{
		min_change = money / 25;
		rest = money % 25;
	}
	else
		rest = money;
	if (rest >= 10)
	{
		min_change += rest / 10;
		rest = rest % 10;
	}
	if (rest >= 5)
	{
		min_change += rest / 5;
		rest = rest % 5;
	}
	if (rest >= 2)
	{
		min_change += rest / 2;
		rest = rest % 2;
	}
	if (rest >= 1)
		min_change += rest / 1;
	printf("%d\n", min_change);
	return (0);
}
