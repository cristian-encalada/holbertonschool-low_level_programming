#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
* main -Entry point
* Program that assigns a random # to the variable n each time it's executed
* Then the program verifies if the number is 0, greater than 0 or less than 0
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	char positive[] = "is positive\n";
	char negative[] = "is negative\n";
	char zero[] = "is zero\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d %s", n, positive);
	}
	else
	{
		if (n < 0)
		{
			printf("%d %s", n, negative);
		}
		else
		{
			printf("%d %s", n, zero);
		}
	}
	return (0);
}
