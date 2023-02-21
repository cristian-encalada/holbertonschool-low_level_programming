#include <stdio.h>

/**
 * main - main block
 * Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0 (success)
 */

int main(void)
{
	int count = 0; 

	int n1 = 1, n2 = 2;
	int nx = n1 + n2;

     	printf("%u, ", n1);
	printf("%u, ", n2);

	while (count <= 47)
	{
		if (count == 47)
		{
			printf("%u \n", nx);
		}
		else
		{ 
			printf("%u, ", nx); 
		}
		n1 = n2;
		n2 = nx;
		nx = n1 + n2; 
		count++;
	}
	return (0);
}
