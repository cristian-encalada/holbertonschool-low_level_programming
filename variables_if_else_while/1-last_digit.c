#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
* main -Entry point
* Program that assigns a random # to the variable n each time it's executed
* Then the program verifies if last_digit is 0, greater than 0 or less than 0
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, last_digit;
	char greater[] = "and is greater than 5\n";
	char less[] = "and is less than 6 and not 0\n";
	char zero[] = "and is 0\n";

	/**Generating a random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**Finding the remainder of the given number by dividing 10*/
	last_digit = n % 10;
	if (last_digit == 0)
	{
		printf("Last digit of %d is ", n);
		printf("%d %s", last_digit, zero);
	}
	else
	{
		if (last_digit != 0)
		{
			if (last_digit < 6)
			{
				printf("Last digit of %d is ", n);
				printf("%d %s", last_digit, less);
			}
			else
			{
				printf("Last digit of %d is ", n);
				printf("%d %s", last_digit, greater);
			}
		}
	}
	return (0);
}
