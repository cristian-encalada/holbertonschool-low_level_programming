#include <stdio.h>

/**
 * main - main block
 * Print the first 98 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * counter goes to 95 because the firt 2 values are known
 * Return: 0 (success)
 */

int main(void)
{
	int counter = 0;

	double n1 = 1, n2 = 2;
	double n = n1 + n2;

	printf("%.0f, ", n1);
	printf("%.0f, ", n2);

	while (counter <= 95)
	{
		if (counter < 95)
		{
			printf("%.0f, ", n);
		}
		else
		{
			printf("%.0f\n", n);
		}
		n1 = n2;
		n2 = n;
		n = n1 + n2;
		counter++;
	}
	return (0);
}
