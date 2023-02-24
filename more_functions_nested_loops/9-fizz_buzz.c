#include <stdio.h>
/**
 * main - Main entry
 * Return: 0 if no errors
 */
int main(void)
{
	char mul3[] = "Fizz", mul5[] = "Buzz", mul35[] = "FizzBuzz";
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("%s ", mul35);
		else
			if (num % 3 == 0)
			printf("%s ", mul3);
		else
			if (num % 5 == 0)
			printf("%s ", mul5);
		else
			printf("%d ", num);
	}
		putchar('\n');
	return (0);
}
