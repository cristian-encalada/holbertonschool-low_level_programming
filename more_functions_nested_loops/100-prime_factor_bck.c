#include <stdio.h>
/**
 * main - Main entry
 * @n input value
 * @sp = smallest prime #
 * Return: 0 if no errors
 */
int main(void)
{
	int n = 1231952, sp = 2;

	while (n > sp * sp)
	{
		if ((n % sp) == 0)
		{
			printf("%d ", sp);
			n = n / sp;
		}
		else
			sp = sp + 1;
	}
		putchar('\n');
	return (0);
}
