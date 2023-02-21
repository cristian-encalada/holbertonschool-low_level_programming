#include<stdio.h>
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int counter, total = 0;
	
	for (counter = 0; counter < 1024; counter++)
	{
		if ((counter % 5 == 0) || (counter % 3 == 0))
		{
			total = total + counter;
		}
	}
	printf("%d\n", total);
	return (0);
}
