#include <stdio.h>

/**
 * main - main block
 * Print the sum of the even-valued terms, followed by a new line.
 * By considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000
 * Return: 0 (success)
 */

int main(void)
{
	long int n1 = 1, n2 = 2;
	long int n = n1 + n2;
	long int sum = n2;

	while ((n1 < 4000000) && (n2 < 4000000))
	{
		n1 = n2;
		n2 = n;
		n = n1 + n2;
		if ((n % 2) == 0)
		sum = sum + n;
	}
	printf("%lu\n", sum);
	return (0);
}
