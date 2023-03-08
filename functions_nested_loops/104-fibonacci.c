#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Print the first 98 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * counter goes to 95 because the firt 2 values are known
 * +18446744073709551615 = max value for long int
 * Return: 0 (success)
 */

int main(void)
{
	int counter = 0;

	double n1 = 1, n2 = 2;
	double n = n1 + n2;

	printf("%.0f, ", n1);
	printf("%.0f, ", n2);

	while (counter <= 89)
	{
		printf("%.0f, ", n);
		n1 = n2;
		n2 = n;
		if (counter == 75)
			n2++;
		n = n1 + n2;
		counter++;
	}
	putchar('\n');
	return (0);
}
