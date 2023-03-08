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

	unsigned long n1 = 1, n2 = 2;
	unsigned long n = n1 + n2;
	unsigned long temp1, temp2, x1, x2, y1, y2;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	while (counter <= 95)
	{
		if (counter <= 89)
		printf("%lu, ", n);
		n1 = n2;
		n2 = n;
		n = n1 + n2;
		if (counter == 88)
			temp1 = n2;
		if (counter == 89)
		{
			temp2 = n2;
			x1 = temp1 / 10000000000;
			x2 = temp1 % 10000000000;
			y1 = temp2 / 10000000000;
			y2 = temp2 % 10000000000;
			printf("%lu%lu, ", (x1 + y1), (x2 + y2));
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
