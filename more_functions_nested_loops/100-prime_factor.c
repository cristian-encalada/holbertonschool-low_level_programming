#include <stdio.h>
/**
 * main - Main entry
 * @n input value
 * @sp = smallest prime #
 * Return: 0 if no errors
 */
int main(void)
{
	int sp = 2;
	long int n = 612852475143;

	while (n > sp * sp)
	{
		if ((n % sp) == 0)
		{
			n = n / sp;
		}
		else
		{
			sp = sp + 1;
		}
	}
		printf("%lu", n);
		putchar('\n');
	return (0);
}
